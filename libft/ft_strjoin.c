/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:39:29 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/14 16:24:08 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*retc(char const *s1, char const *s2)
{
	char	*ret;
	int		tam;

	if (!s1 && !s2)
	{
		ret = malloc(1 * sizeof(char *));
		if (!ret)
			return (NULL);
		ret[0] = '\0';
		return (ret);
	}
	tam = ft_strlen(s2) - 1;
	ret = malloc(tam * sizeof(char *));
	while (*(s2--))
		ret[tam--] = *(s2 + 2);
	return (ret);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i[2];
	char	*ret;

	if (!s1)
		return (retc(s1, s2));
	i[0] = ft_strlen(s1) - 1;
	if (!s2 && !*s2)
	{
		ret = ft_calloc((i[0] + 2), sizeof(char));
		ft_memcpy(ret, s1, ft_strlen(s1) + 1);
		return (ret);
	}
	i[1] = ft_strlen(s2) - 1;
	ret = ft_calloc((i[0] + i[1] + 3), sizeof(char));
	if (!ret)
		return (0);
	while (s2[i[1]--])
		ret[i[1] + 1 + i[0] + 1] = s2[i[1] + 1];
	while (s1[i[0]] && i[0] >= 0)
	{
		ret[i[0]] = s1[i[0]];
		i[0]--;
	}
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	char *a;

	a = ft_strjoin("ABC"	, "");
	printf("%s\n", a);
}
*/
