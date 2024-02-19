/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmonzon- <jmonzon-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:51:29 by jmonzon-          #+#    #+#             */
/*   Updated: 2024/02/14 20:53:12 by jmonzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*itr;

	if (!lst || !f || !del)
		return (NULL);
	ret = ft_lstnew(f(lst->content));
	lst = lst->next;
	if (!ret)
	{
		del(ret);
		return (NULL);
	}
	itr = ret;
	while (lst)
	{
		itr->next = ft_lstnew(f(lst->content));
		if (!itr->next)
		{
			del(f(lst->content));
			return (NULL);
		}
		itr = itr->next;
		lst = lst->next;
	}
	return (ret);
}
