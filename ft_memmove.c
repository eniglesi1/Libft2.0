/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enmanueliglesiasgarciadelcastillo <enma    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:48:04 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/30 16:12:35 by enmanueligl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dst;

	dst = dest;
	if (ft_strlen(src) > ft_strlen(dest))
		return (ft_memcpy(dest, src, n));
	while (n-- > 0)
		(*(char *)dest++) = *(char *)src++;
	return (dst);
}

// dst -= n
// dst +n ++
// aux++
