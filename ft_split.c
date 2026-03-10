/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiglesia <eiglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:26:29 by eniglesi          #+#    #+#             */
/*   Updated: 2026/03/05 18:47:41 by eiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = -1;
	if (c < 0)
		return (0);
	if (s[0] != c && s[0] != 0)
		words++;
	while (s[++i] != '\0' && s[i + 1] != '\0')
		if (s[i] == c && s[i + 1] != c)
			words++;
	return (words);
}

static int	word_len(const char *s, char c, int start)
{
	int	i;

	i = 0;
	while (s[start + i] != c && s[start + i] != '\0')
		i++;
	return (i);
}

void	free_ptrs(char **ptr, int start)
{
	while (--start >= 0)
		free(ptr[start]);
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		start;

	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			ptr[start] = ft_substr(s, i, word_len(s, c, i));
			if (ptr[start++] == NULL)
				return (free_ptrs(ptr, start - 1), NULL);
			i = i + word_len(s, c, i);
		}
		else
			i++;
	}
	ptr[start] = NULL;
	return (ptr);
}
