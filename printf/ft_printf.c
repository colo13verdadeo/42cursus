/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:25:36 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/10 16:52:19 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	pf_putchr(int chr)
{
	if (chr)
		return (write(1, &chr, 1));
	return (0);
}

static int	pf_show(char const *str, va_list sty)
{
	str++;
	if (*str == 'd' || *str == 'i')
		return (pf_putnbr(va_arg(sty, int)));
	else if (*str == 's')
		return (pf_putstr(va_arg(sty, char *)));
	else if (*str == 'c')
		return (pf_putchr(va_arg(sty, int)));
	else if (*str == 'p')
	{
		if (write (1, "0x", 2) == -1)
			return (-1);
		return (pf_puthex(va_arg(sty, long), 0) + 2);
	}
	else if (*str == 'u')
		return (pf_uputnbr(va_arg(sty, unsigned int)));
	else if (*str == 'x')
		return (pf_hex(va_arg(sty, int), 0));
	else if (*str == 'X')
		return (pf_hex(va_arg(sty, int), 1));
	else if (*str == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(char const *ag1, ...)
{
	va_list			valist;
	int				ret;
	int				top;

	ret = 0;
	va_start(valist, ag1);
	top = ret;
	while (*ag1 && ret >= top)
	{
		top = ret;
		if (*ag1 == '%')
			ret += pf_show(ag1++, valist);
		else
			ret += write(1, (char *) &ag1[0], 1);
		if (*ag1)
			ag1++;
	}
	va_end(valist);
	if (!(ret >= top))
		return (-1);
	return ((int) ret);
}
