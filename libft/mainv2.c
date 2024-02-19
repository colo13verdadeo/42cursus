/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:10:37 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/07 18:49:52 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	ft_toupperv2(unsigned int c, char i)
{
	if (i == ' ')
		return (';');
	if (c == 3 && i == 'b')
		return ('a');
	if (i == 'a' || i == 'z')
		return ('H');
	if (c == 2)
		return ('l');
	return (i);
}

void	pruebas(int c)
{
	if(c)
	{
		printf("%s", "isdigit: ");
		if (!ft_isdigit((int) 'a') && !ft_isdigit((int) '-') && ft_isdigit((int) '1'))
			printf("%s\n", "OK");
		else
			printf("%s\n", "KO");
		printf("%s", "Atoi: ");
		if (ft_atoi("-2147483648") == atoi("-2147483648") && ft_atoi("2147483647") == atoi("2147483647"))
			printf("%s\n", "OK");
		else
			printf("%s\n", "KO");

		printf("%s", "split: ");
		char **mat;
		
		mat = ft_split("   ho la cm_va      ", ' ');
		if (mat[2][2] == '_')
			printf("%s\n", "OK");
		else
			printf("%s\n", "KO");
		printf("%s", "memcpy: ");
		char str1[] = "holacc";
		char str2[255];
		ft_memcpy(str2, str1, 4);
		printf("%s\n", str2);
		printf("%s", "strlcpy: ");
		ft_strlcpy(str1, "lor", 3);
		if (str1[1] == 'o')
			printf("%s\n", "OK");
		else
			printf("%s\n", "KO");
		printf("%s", "toupper: ");
		if (ft_toupper('a') == 'A' && ft_toupper('-') == '-')
			printf("%s\n", "OK");
		else
			printf("%s\n", "KO");
		printf("%s", "tolower: ");
		if (ft_tolower('A') == 'a' && ft_tolower('-') == '-')
			printf("%s\n", "OK");
		else
			printf("%s\n", "KO");
		int	num = ft_strncmp("abcde1", "abcde2", 6);
		printf("%s", "strncmp: ");
		if (num < 0)
			printf("%s\n", "OK");
		else
			printf("%s\n", "KO");
		printf("%s", "ft_itoa: ");
		if(ft_itoa(-1234)[0] == '-' && ft_itoa(1234567)[2] == '3' && ft_itoa(-2147483648)[3] == '4' && ft_itoa(0)[0] == '0' && ft_itoa(100)[1] == '0')
		printf("%s\n", "OK");
		else
			printf("%s\n", "KO");
		if (ft_substr("lorem ipsu", 0, 10)[2] == 'r' && ft_substr("Lorem ipsum dolor sit amet", 7, 10)[0] == 'p')
			printf("substr: %s\n", "OK");
		else
			printf("substr: %s\n", "KO");
		if (ft_strnstr("abcdef", "abc", 3)[1] == 'b' && ft_strnstr("abcdef", "cd", 3)[2] == 'e')
			printf("%s\n", "strnstr: OK");
		else
			printf("%s\n", "strnstr: KO");
		if (ft_strtrim("lorem ipsum dolor sit amet", "amtel")[20] == ' ')
			printf("%s\n", "strtrim: OK");
		else
			printf("%s\n", "strtrim: KO");
		if (ft_split("lorem  ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')[1][1] == 'p' && ft_split(" split me  !", '\0')[0][7] == 'm')
			printf("%s\n", "split: OK");
		else
			printf("%s\n", "split: KO");
		if (ft_strmapi("zo_b", ft_toupperv2)[2] == 'l' && ft_strmapi("zo_b", ft_toupperv2)[4] == '\0')
			printf("%s\n", "strmapi: OK");
		else
			printf("%s\n", "strmapi: KO");
	}
	else
	{
//		printf("%d\n", test(66));
	}
}
int	main (void)
{
	pruebas(1);
	return (0);
}
