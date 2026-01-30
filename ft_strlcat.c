/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enmanueliglesiasgarciadelcastillo <enma    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:48:23 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/30 16:33:56 by enmanueligl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	i;

	a = 0;
	i = 0;
	while (dst[a] != '\0' && a < size)
		a++;
	if (size == a)
		return (size + ft_strlen(src));
	size = (size - a) - 1;
	while (size-- > 0 && src[i] != '\0')
		dst[a++] = src[i++];
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(src) - i);
}
