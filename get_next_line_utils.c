/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiglesia <eiglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:49:20 by eiglesia          #+#    #+#             */
/*   Updated: 2026/03/10 20:28:30 by eiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_realloc(char *s1, int j, int len)
{
	char	*a;
	int		i;
	int		n;

	i = len + j;
	if (i == 0)
		return (free(s1), NULL);
	a = malloc(sizeof(char) * i + 1);
	if (!a)
		return (free(s1), NULL);
	n = sizeof(char) * i + 1;
	while (n > 0)
		((char *)a)[--n] = '\0';
	if (s1)
		return (ft_strlcpy(a, s1, (i - j) + 1), free(s1), a);
	return (a);
}

int	ft_copynl(char *extra, int baits, char *string, int len)
{
	int	j;

	j = 0;
	if (string == NULL)
		return (0);
	while (extra[j] != '\n' && j < baits && extra[j])
	{
		string[len] = extra[j];
		j++;
		len++;
	}
	return (len);
}

int	readmem(int fd, char *extra)
{
	int	baits;

	baits = read(fd, extra, BUFFER_SIZE);
	if (baits != -1)
		extra[baits] = 0;
	else
		extra[0] = 0;
	return (baits);
}

// ft_strlen now available
int	ft_is_line(char *extra, int len)
{
	int	i;

	i = 0;
	while ((len == 0 || extra[i] != '\n') && extra[i])
		i++;
	if (extra[i] == '\n' || len == 0)
		return (i);
	return (-1);
}
