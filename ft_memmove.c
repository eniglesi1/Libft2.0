/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiglesia <eiglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:48:04 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/22 19:54:28 by eiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (ft_strlen(src) > ft_strlen(dest))
		return (ft_memcpy(dest, src, n));
	while (n-- > 0)
		(*(char *)dest++) = *(char *)src++;
	return (dest);
}

// dst -= n 
// dst +n ++
// aux++