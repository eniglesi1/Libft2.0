/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enmanueliglesiasgarciadelcastillo <enma    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:18:21 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/30 16:43:34 by enmanueligl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (n != ++i)
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

//ft_strncmp ok success clean ✓✓✓✓✓✓✓✓✓✓✗ KO
/*
#include <stdio.h>
#include <string.h>

void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int main(void)
{
	char	*dst;
	if (!(dst = (char *)malloc(sizeof(*dst) * 15)))
		return (0);
	memset(dst, 0, 15);
	memset(dst, 'r', 6);
	memset(dst, 'r', 15);
	ft_print_result(ft_strlcat(dst, "lorem ipsum dolor sit amet", 5));
	write(1, "\n", 1);
	write(1, dst, 15);
	free(dst);
}*/
