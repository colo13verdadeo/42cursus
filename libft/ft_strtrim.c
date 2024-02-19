/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:15:52 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/14 17:15:55 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	geti(char const *s1, char const *set)
{
	int	i;
	int	boo;
	int	ret;

	i = 0;
	ret = 0;
	boo = 0;
	while (*s1)
	{
		while (*(s1 + i) && set[i])
		{
			if (set[i] == *s1)
				boo = 1;
			i++;
		}
		if (boo)
			ret++;
		else
			return (ret);
		boo = 0;
		i = 0;
		s1++;
	}
	return (0);
}

static int	getf(char const *s1, char const *set)
{
	int	i[4];

	i[2] = 0;
	i[3] = 0;
	i[1] = 0;
	i[0] = ft_strlen(s1) - 1;
	while (*(s1 + i[0]))
	{
		while (*(s1 + i[0]) && set[i[1]])
		{
			if (*(s1 + i[0]) == set[i[1]])
				i[2] = 1;
			i[1]++;
		}
		if (i[2])
			i[3]++;
		else
			return (ft_strlen(s1) - i[3]);
		i[2] = 0;
		i[1] = 0;
		i[0]--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i[3];
	char	*ret;

	if (!s1 || !set)
		return (NULL);
	i[1] = geti(s1, set);
	i[2] = getf(s1, set);
	if (i[1] > i[2])
	{
		ret = (char *) malloc(1 * sizeof(*s1));
		ret[0] = 0;
		return (ret);
	}
	ret = (char *) malloc((i[2] - i[1] + 1) * sizeof(*s1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, (char *)(s1 + i[1]), (unsigned long)(i[2]) - i[1] + 1);
	return (ret);
}
