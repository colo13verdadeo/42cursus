/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:00:43 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/03 13:07:07 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funciones usadas:

#include "libft.h"
#include "ft_printf.h"

int	ft_count(char const *a, char c)
{
	int	cont;

	cont = 0;
	while (*a)
	{
		if (*a == c)
			cont++;
		a++;
	}
	return (cont);
}
