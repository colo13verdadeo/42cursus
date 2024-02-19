/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:25:51 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/05 17:15:09 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	pf_puthex(unsigned long n, int type)
{
	int	cont;

	cont = 0;
	if (n > 15)
	{
		cont = pf_puthex(n / 16, type);
		if (cont == -1)
			return (-1);
		return (pf_puthex(n % 16, type) + cont);
	}
	else
	{
		if (!type)
			return (write (1, &"0123456789abcdef"[n], 1));
		else
			return (write (1, &"0123456789ABCDEF"[n], 1));
		return (0);
	}
}
