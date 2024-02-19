/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:05:43 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/01/10 20:53:50 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int	main(int ac, char **ag)
{
	if (ac == 2)
	{
		printf("%d\n", isascii(atoi(ag[1])));
		printf("%d\n", ft_isascii(atoi(ag[1])));

	}
}*/
