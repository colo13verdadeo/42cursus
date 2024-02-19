/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:29:01 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/01/31 17:14:28 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*temto;
	const unsigned char	*tem;

	if (!src && !dst && len != 0)
		return (dst);
	temto = (unsigned char *) dst;
	tem = (unsigned char *) src;
	while (len--)
		*(temto++) = *(tem++);
	return ((void *) dst);
}
