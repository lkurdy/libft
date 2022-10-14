/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkurdy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:08:25 by lkurdy            #+#    #+#             */
/*   Updated: 2022/05/11 17:03:47 by lkurdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	remp(int *i, int *y)
{
	*i = 0;
	*y = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	int		i;
	int		y;

	remp(&i, &y);
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[y])
		y++;
	c = malloc(sizeof(char) * (i + y + 1));
	if (!c)
		return (NULL);
	i = 0;
	y = 0;
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[y])
		c[i++] = s2[y++];
	c[i] = '\0';
	return (c);
}
