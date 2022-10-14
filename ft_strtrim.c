/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkurdy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:04:51 by lkurdy            #+#    #+#             */
/*   Updated: 2022/05/06 15:53:27 by lkurdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ischarset(char const *set, char s)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		j;
	int		d;

	i = 0;
	d = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (s1[i] && ischarset(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ischarset(set, s1[j - 1]))
		j--;
	dest = malloc(sizeof(char) * (j - i + 1));
	if (!dest)
		return (NULL);
	while (i < j)
		dest[d++] = s1[i++];
	dest[d] = '\0';
	return (dest);
}
