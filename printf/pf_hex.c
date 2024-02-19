/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:07:56 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/05 17:01:39 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_printf.h"

int	pf_hex(unsigned int n, int type)
{
	int	cont;

	cont = 0;
	if (n > 15)
	{
		cont = pf_hex(n / 16, type);
		if (cont == -1)
			return (-1);
		return (pf_hex(n % 16, type) + cont);
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
