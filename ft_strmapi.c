/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enmanueliglesiasgarciadelcastillo <enma    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:53:59 by marvin            #+#    #+#             */
/*   Updated: 2026/01/30 16:42:07 by enmanueligl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s)
		return (NULL);
	result = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	i = -1;
	while (s[++i] != '\0')
		result[i] = (*f)(i, s[i]);
	result[i] = '\0';
	return (result);
}
