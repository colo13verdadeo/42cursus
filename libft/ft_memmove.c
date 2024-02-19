/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:38:42 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/01/24 19:45:06 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*temto;
	const unsigned char	*tem;

	temto = (unsigned char *)dst;
	tem = (unsigned char *)src;
	i = 0;
	if (!src && !dst)
		return (NULL);
	if (tem < temto)
		while (len--)
			temto[len] = tem[len];
	else
	{
		while (len--)
		{
			temto[i] = tem[i];
			i++;
		}
	}
	return (dst);
}
