/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkurdy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:22:46 by lkurdy            #+#    #+#             */
/*   Updated: 2022/05/10 16:22:47 by lkurdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*s;
	t_list	*new;

	if (lst && f && del)
	{
		s = ft_lstnew(f(lst -> content));
		if (!s)
			return (NULL);
		new = s;
		lst = lst -> next;
		while (lst)
		{
			s -> next = ft_lstnew(f(lst -> content));
			if (!(s -> next))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			s = s -> next;
			lst = lst -> next;
		}
		s -> next = NULL;
	}
	return (new);
}
