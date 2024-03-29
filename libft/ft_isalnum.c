/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:59:34 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/01/10 17:32:39 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(int c)

{
	if (!(c >= 48 && c < 58) && !((c >= 65 && c < 91)
			|| (c >= 97 && c < 123)))
	{
		return (0);
	}
	return (1);
}
/*
int	main(void)
{
	if (1)
	{
		printf("%d\n", ft_isalnum(122));
	}
}*/
