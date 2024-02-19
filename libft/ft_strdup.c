/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:05:50 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/01/22 19:33:22 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	int		i;

	i = ft_strlen(s1);
	ret = malloc(ft_strlen(s1) * sizeof (char) + 1);
	if (!ret)
		return (0);
	ft_memcpy(ret, s1, ft_strlen(s1));
	ret[i] = '\0';
	return (ret);
}
