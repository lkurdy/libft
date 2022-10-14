/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkurdy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:35:15 by lkurdy            #+#    #+#             */
/*   Updated: 2022/05/06 15:13:43 by lkurdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	j = n;
	i = 0;
	if ((unsigned char *)src > (unsigned char *)dest)
	{
		while (i < n)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	else
	{
		while (j > 0)
		{
			j--;
			*(unsigned char *)(dest + j) = *(unsigned char *)(src + j);
		}
	}
	return (dest);
}
