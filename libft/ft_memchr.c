/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:17:18 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/01/13 17:44:23 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ret;

	ret = (unsigned char *)s;
	while (n--)
	{
		if (*ret == (unsigned char) c)
			return (ret);
		ret++;
	}
	return (0);
}
/*
int	main(int ac, char **ag)
{
	if (ac == 2)
	{
		char	nom[5] = "abcde";
		char	*nom2;
		
		nom2 = ft_memchr(nom, 'c', strlen(nom));
		printf("%c\n", nom2[0]);

		printf("%x\n", ft_memchr(nom, 'c', strlen(nom)));
		printf("%p\n", memchr(nom, 'c', strlen(nom)));
	}
	return (0);
}*/
