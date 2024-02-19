/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:47:43 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/14 20:47:40 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//0 => Index
//1 => Contador de c
#include "libft.h"

static int	contadorespacios(char const *array, char c)
{
	int		ret;
	char	*dstarr;

	dstarr = (char *)(array);
	ret = 1;
	while (*dstarr == c && c && *dstarr)
		dstarr++;
	while (*dstarr && c)
	{
		if (*dstarr++ == c)
		{
			ret++;
			while (*dstarr && *dstarr == c)
				dstarr++;
		}
	}
	if (c)
	{
		if (*(dstarr - 1) == c)
			return (ret - 1);
	}
	return (ret);
}

static char	**insertarenmatriz(char	**arrdst, char *arrsrc, char c)
{
	int	i[2];

	i[0] = 0;
	while (*arrsrc == c && c && *arrsrc)
		arrsrc++;
	while (*arrsrc)
	{
		i[1] = 0;
		while (*arrsrc != c && *arrsrc)
			arrdst[i[0]][i[1]++] = *(arrsrc++);
		arrdst[i[0]][i[1]] = '\0';
		i[0]++;
		while (*arrsrc == c && *arrsrc)
			arrsrc++;
	}
	return (arrdst);
}

static char	**bor(char **mat, int inc)
{
	while (inc--)
	{
		free(mat[inc]);
	}
	free(mat);
	return (NULL);
}

static char	**crearmatriz(char *arr, int tam, char c)
{
	char	**ret;
	int		i[3];

	i[0] = 0;
	if (!arr)
		return (NULL);
	ret = (char **) malloc((tam + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	i[2] = ft_strlen(arr);
	while (*arr == c && *arr)
		arr++;
	while (*arr)
	{
		i[1] = 0;
		while (*arr && *(arr++) != c)
			i[1]++;
		ret[i[0]++] = malloc(i[1] + 1 * sizeof(char));
		if (!ret[i[0] - 1])
			return (bor(ret, i[0]));
		while (*arr && *arr == c)
			arr++;
	}
	ret[i[0]] = NULL;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	*temp;
	char	**mat;
	int		espacios;
	int		tamano;

	if (!s)
		return (NULL);
	tamano = ft_strlen(s);
	temp = (char *)s;
	espacios = contadorespacios(s, c);
	mat = crearmatriz(temp, espacios, c);
	if (!mat)
		return (0);
	mat = insertarenmatriz(mat, temp, c);
	if (!mat)
		return (0);
	return (mat);
}
/*
int	main(void)
{
	char const *s = "      split       this for   me  !       ";
	char c = ' ';
	ft_split(s, c);
}
*/
