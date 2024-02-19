/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:23:50 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/10 16:45:47 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

#include <stdio.h>
int	main()
{
/*char a[] = "%s Holas %%%d \n%i\n %c\n%p\n%u\n%x%X\n%%\n";
unsigned int	unsg = 4294967295;
	ft_printf(a, "n0z", 2, 34502, 'M', a, unsg, 0xfff, 0xFFF);
	write (1, "\n|\n", 3);
	printf(a, "n0z", 2, 34502, 'M', a, unsg, 0xfff, 0xFFF);
	write (1, "\n|\n", 3);
	*/
/*	char	a[] = "\"%s\" %x %p %% \"%s\" %d\n";
	char	tm[] = "HOS";
	int	p1 = printf(a, "And", "Some", "Some", "joined", 213213);
	int p2 = ft_printf(a, "And", "Some", "Some", "joined", 212312);

	ft_printf("FT: %d | PF: %d\n", p1, p2);*/
	char	a[] = "%s\n %%";

	int r1 = ft_printf(a, "'2'+256");
	int r2 = printf(a, "'2'+256");
	printf("\nFT: %d\nPR: %d", r1, r2);
}
