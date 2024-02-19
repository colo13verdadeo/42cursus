/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:05:12 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/10 16:50:09 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	pf_putnbr(int nb)
{
	int	b;
	int	rev;

	b = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		b = write(1, "-", 1);
		nb *= -1;
		if (b == -1)
			return (b);
	}
	if (nb / 10)
	{
		rev = pf_putnbr(nb / 10);
		if (rev == -1)
			return (-1);
		nb = (nb % 10) + '0';
		return (write (1, &nb, 1) + rev + b);
	}
	else
		nb = nb + '0';
	return (write (1, &nb, 1) + b);
}
