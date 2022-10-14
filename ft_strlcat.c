/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkurdy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:36:21 by lkurdy            #+#    #+#             */
/*   Updated: 2022/05/09 17:10:08 by lkurdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	j = d;
	i = 0;
	if (d < size - 1 && size > 0)
	{
		while (src[i] && j < size - 1)
			dest[j++] = src[i++];
		dest[j] = '\0';
	}
	if (d >= size)
		d = size;
	return (d + s);
}
