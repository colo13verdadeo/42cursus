/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:32:38 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/02 17:05:29 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	contador;

	i = 0;
	contador = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (*haystack)
	{
		while (*(haystack + i) == needle[i]
			&& (unsigned long)(contador + i) < len)
		{
			if (!needle[i + 1])
				return ((char *) haystack);
			i++;
		}
		contador++;
		haystack++;
		i = 0;
	}
	return (NULL);
}
