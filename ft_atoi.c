/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiglesia <eiglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:50:37 by eniglesi          #+#    #+#             */
/*   Updated: 2026/01/22 08:49:09 by eiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	a;
	int	b;
	int	neg;

	neg = 1;
	a = 0;
	b = 0;
	if (nptr[b] == 0)
		return (0);
	while (nptr[b] == 0 || (nptr[b] > 8 && nptr[b] < 14) || nptr[b] == ' ')
		b++;
	if (nptr[b] == '-' || nptr[b] == '+')
		neg *= (44 - nptr[b++]);
	while (nptr[b] != '\0' && nptr[b] > 47 && nptr[b] < 58)
		a = a * 10 + (nptr[b++] - 48);
	return (a * neg);
}
