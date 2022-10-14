/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkurdy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:03:51 by lkurdy            #+#    #+#             */
/*   Updated: 2022/05/05 16:57:27 by lkurdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*u;

	u = malloc(nmemb * size);
	if (!u)
		return (NULL);
	ft_bzero(u, nmemb * size);
	return (u);
}
