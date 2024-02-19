/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:13:37 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/01/24 19:44:28 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*com1;
	unsigned char	*com2;

	com1 = (unsigned char *)s1;
	com2 = (unsigned char *)s2;
	while (n--)
	{
		if (*com1++ != *com2++)
			return ((int) *(com1 - 1) - (int) *(com2 - 1));
	}
	return (0);
}
