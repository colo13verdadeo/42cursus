/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:31:04 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/10 19:13:50 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *s, int c)
{
	char	*backs;
	int		au;

	au = 0;
	while (*s)
	{
		if (*s == (char) c)
		{
			backs = ((char *) s);
			au = 1;
		}
		s++;
	}
	if (au)
		return (backs);
	if (!(char)c)
		return ((char *)s);
	return (0);
}
/*
int	main(int ac, char **ag)
{
	if (ac == 2)
	{
		printf("%s\n", ft_strrchr(ag[1], (int) 'a'));
		printf("%s\n", strchr(ag[1], (int) 'a'));
		printf("%s\n", strrchr(ag[1], (int) 'a'));

	}
}*/
