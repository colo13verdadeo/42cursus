/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:17:34 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/01/10 17:34:30 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int i)
{
	if (!((i >= 65 && i < 91) || (i >= 97 && i < 123)))
	{
		return (0);
	}
	return (1);
}
