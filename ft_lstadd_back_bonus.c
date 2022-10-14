/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkurdy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:27:37 by lkurdy            #+#    #+#             */
/*   Updated: 2022/05/09 19:35:01 by lkurdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*s;

	if (lst)
	{
		if (*lst)
		{
			s = ft_lstlast(*lst);
			s -> next = new;
		}
		else
			*lst = new;
	}
}
