/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiglesia <eiglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:48:04 by eniglesi          #+#    #+#             */
/*   Updated: 2026/03/03 18:03:37 by eiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dst;

	dst = dest;
	if ((dest || src) && dest > src)
		return (ft_memcpy(dest, src, n));
	while ((dest || src) && n-- > 0)
		(*(char *)dest++) = *(char *)src++;
	return (dst);
}
