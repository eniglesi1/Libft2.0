/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enmanueliglesiasgarciadelcastillo <enma    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:49:47 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/30 16:22:35 by enmanueligl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
		if (*s++ == (unsigned char)c)
			return ((char *)s - 1);
	if (c == 0)
		return ((char *)s);
	return (NULL);
}
