/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:12:03 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/10 16:52:47 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int	ft_printf(char const *ag1, ...);
int	pf_putstr(char *str);
int	ft_count(char const *a, char c);
int	pf_putnbr(int nb);
int	pf_puthex(unsigned long n, int type);
int	pf_uputnbr(unsigned int n);
int	pf_hex(unsigned int n, int type);

#endif
