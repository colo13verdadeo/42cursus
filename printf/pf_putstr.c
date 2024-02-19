/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 09:54:03 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/03 18:01:49 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	pf_putstr(char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	return (write (1, &*str, ft_strlen(str)));
}
