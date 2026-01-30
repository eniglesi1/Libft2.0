/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enmanueliglesiasgarciadelcastillo <enma    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:42:03 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/30 16:05:54 by enmanueligl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_baits(int n)
{
	int	a;

	a = 0;
	while (n != 0)
	{
		n = n / 10;
		a++;
	}
	return (a);
}

static char	*ft_intochar(int i, int n)
{
	char	*a;

	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	a = malloc(sizeof(char) * i + 1);
	if (!a)
		return (NULL);
	a[i] = 0;
	while (n != 0)
	{
		i--;
		a[i] = ((n % 10) + 48);
		n = n / 10;
	}
	if (i == 1)
		a[0] = '-';
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		i;

	i = ft_baits(n);
	if (n != 0 && n != -2147483648)
		a = ft_intochar(i, n);
	else if (n == -2147483648)
		a = ft_strdup("-2147483648");
	else
		a = ft_strdup("0");
	return (a);
}
