/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiglesia <eiglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:50:04 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/22 12:36:30 by eiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- != 0)
		if (*(const unsigned char *)s++ == (unsigned char)c)
			return ((void *)(s - 1));
	return (0);
}
/*
if (n == 0)
	return (0);
if ((unsigned char)*s == (unsigned char)c)
	return (s);
return (ft_memchr(s + 1, c, n - 1))
*/