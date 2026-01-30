/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enmanueliglesiasgarciadelcastillo <enma    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:48:14 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/30 16:39:13 by enmanueligl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	dst[0] = 0;
	ft_strlcat(dst, src, size);
	return (ft_strlen(src));
}
