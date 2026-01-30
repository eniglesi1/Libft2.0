/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enmanueliglesiasgarciadelcastillo <enma    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:49:54 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/30 17:27:42 by enmanueligl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (s[i] == (unsigned char)c)
		return (((char *)s) + i);
	while (i-- != 0)
		if (s[i] == (unsigned char)c)
			return (((char *)s) + i);
	return (NULL);
}
