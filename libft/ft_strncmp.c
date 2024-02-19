/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:19:07 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/01/22 20:03:45 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	index;

	index = 0;
	if ((unsigned int) n <= index)
		return (n);
	while (s1[index] == s2[index] && s1[index] != '\0'
		&& s2[index] != '\0' && (unsigned int) n - 1 > index)
	{
		index++;
	}
	return ((unsigned char) s1[index] - (unsigned char) s2[index]);
}
