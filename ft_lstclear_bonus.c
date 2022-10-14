/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkurdy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:45:14 by lkurdy            #+#    #+#             */
/*   Updated: 2022/05/10 14:52:08 by lkurdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*s;

	if (lst && del && (*lst))
	{
		while (*lst)
		{
			s = (*lst)-> next;
			del((*lst)-> content);
			free(*lst);
			*lst = s;
		}
		*lst = NULL;
	}
}
