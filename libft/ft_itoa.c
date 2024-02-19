/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:55:33 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/02 17:37:26 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int num)
{
	int	ret;

	ret = 0;
	if (num < 0)
		num *= -1;
	while (num >= 10)
	{
		num = num / 10;
		ret++;
	}
	return (ret + 1);
}

static char	*check(int v)
{
	if (v == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (v == 2147483647)
		return (ft_strdup("2147483647"));
	else if (v == 0)
		return (ft_strdup("0"));
	else
		return ("K");
}

static char	*asig(int num, int tam)
{
	char	*ret;

	if (num > 0)
	{
		ret = malloc((tam + 1) * sizeof(char));
		if (!ret)
			return (0);
	}
	else
	{
		num *= -1;
		ret = malloc((++tam + 1) * sizeof(char));
		if (!ret)
			return (0);
	}
	return (ret);
}

static char	*convert(int num)
{
	char	*ret;
	int		i;
	int		tam;

	tam = numlen(num);
	i = 0;
	ret = asig(num, tam);
	if (!ret)
		return (NULL);
	if (num < 0)
	{
		ret[i++] = '-';
		tam++;
		num *= -1;
	}
	ret[tam--] = '\0';
	while (num / 10)
	{
		ret[tam--] = num % 10 + '0';
		num = num / 10;
	}
	ret[tam] = num % 10 + '0';
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*retorg;

	retorg = check(n);
	if (!retorg)
		return (0);
	if (retorg[0] != 'K')
		return (retorg);
	retorg = convert(n);
	if (!retorg)
		return (0);
	return (retorg);
}
