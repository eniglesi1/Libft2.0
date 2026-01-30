/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enmanueliglesiasgarciadelcastillo <enma    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:47:41 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/30 16:14:14 by enmanueligl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	while (n-- > 0)
		((char *)ptr)[n] = x;
	return (ptr);
}
