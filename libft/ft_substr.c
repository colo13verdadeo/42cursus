/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:38:55 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/07 19:13:52 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if ((unsigned int) start >= (unsigned int)(ft_strlen(s)))
		return (ft_strdup(""));
	if ((unsigned int)(ft_strlen(s + start)) < len)
		len = ft_strlen(s + start);
	ret = malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (s[start] && len-- && s[0])
		ret[i++] = *((start + s++));
	ret[i] = '\0';
	return (ret);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	size_t tam = 1;
	printf("%s\n", ft_substr("01234", 10, tam));
}
*/
