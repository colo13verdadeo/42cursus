/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:30:39 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/01/13 17:49:28 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tem;

	tem = (unsigned char *) b;
	while (len--)
		*(tem++) = (unsigned char)c;
	return (b);
}
/*
int	main(int ac, char **ag)
{
	char	nombre[10];
	ft_memset(nombre, (int) ag[1][0], sizeof(char) * 10);
	if(ac)
		atoi(ag[1]);
	printf("%c\n", nombre[2]);
}*/
