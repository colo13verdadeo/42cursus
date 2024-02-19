/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:23:38 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/05 17:16:46 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_printf.h"

int	pf_uputnbr(unsigned int n)
{
	int	a;

	a = 0;
	if (n > 9)
	{
		a = pf_uputnbr(n / 10);
		if (a == -1)
			return (-1);
		return (pf_uputnbr(n % 10) + a);
	}
	else
		return (write(1, &"0123456789"[n], 1));
}
