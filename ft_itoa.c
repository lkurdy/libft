/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkurdy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:05:48 by lkurdy            #+#    #+#             */
/*   Updated: 2022/05/11 22:22:00 by lkurdy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_swap(char *a)
{
	size_t	i;
	size_t	j;
	char	t;

	i = 0;
	j = 0;
	while (a[j])
		j++;
	j--;
	if (a[i] == '-')
		i++;
	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
	return (a);
}

static int	num(long int p)
{
	int	j;

	j = 1;
	if (p < 0)
		p = -p;
	while (p > 9)
	{
		p = p / 10;
		j++;
	}
	return (j);
}

static char	*remp(long int nb, int signe)
{
	int		i;
	char	*a;

	a = malloc(sizeof(char) * (num(nb) + signe + 1));
	if (!a)
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		a[i] = '-';
		i++;
	}
	while (nb > 0)
	{
		a[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	a[i] = '\0';
	return (a);
}

char	*ft_itoa(int n)
{
	char		*a;
	int			signe;
	long int	nb;

	nb = n;
	if (n == 0)
	{
		a = malloc(sizeof(char) * 2);
		if (!a)
			return (NULL);
		a[0] = '0';
		a[1] = '\0';
		return (a);
	}
	if (nb < 0)
		signe = 1;
	else
		signe = 0;
	a = remp(nb, signe);
	if (!a)
		return (NULL);
	return (ft_swap(a));
}
/*
#include <stdio.h>
int main()
{
	char	*int_min;

	int_min = ft_itoa(-2147483648);
	printf("%s", int_min);
	free(int_min);
}
*/
