/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:19:20 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/01/09 16:29:14 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(int str)
{
	if (str >= 32 && str <= 126)
		return (1);
	return (0);
}
/*
int	main(int ac, char **ag)
{
	if (ac == 2)
		printf("%d\n", ft_isprint(atoi(ag[1])));
		printf("%d\n", isprint(atoi(ag[1])));

}*/
