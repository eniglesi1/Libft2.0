/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enmanueliglesiasgarciadelcastillo <enma    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:23:07 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/30 16:25:49 by enmanueligl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*a;

	i = ft_strlen(s2) + ft_strlen(s1) + 1;
	a = malloc(sizeof(char) * i);
	if (!a)
		return (NULL);
	ft_strlcpy(a, s1, i + 1);
	ft_strlcat(a, s2, i + 1);
	return (a);
}
