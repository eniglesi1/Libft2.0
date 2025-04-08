/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniglesi <eniglesi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:31:25 by eniglesi          #+#    #+#             */
/*   Updated: 2021/09/27 10:41:02 by eniglesi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	a = malloc(nmemb * size);
	if (!a)
		return (NULL);
	ft_bzero(a, nmemb * size);
	return (a);
}
/*ft_calloc       : 1.OK 2.MOK 3.KO 4.OK 5.OK 6.OK 7.OK 8.OK 9.KO 10.OK 11.OK ==1057993== Argument 'size' of function malloc has a fishy (possibly negative) value: -15
==1057993==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==1057993==    by 0x404C4D: ft_calloc (in /home/eiglesia/Documents/Libft/libftTester/a.out)
==1057993==    by 0x404B4E: main (ft_calloc_test.cpp:43)
==1057993== 
12.OK ==1057993== Argument 'size' of function malloc has a fishy (possibly negative) value: -15
==1057993==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==1057993==    by 0x404C4D: ft_calloc (in /home/eiglesia/Documents/Libft/libftTester/a.out)
==1057993==    by 0x404B76: main (ft_calloc_test.cpp:44)
==1057993== 
13.OK 
==1057993== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==1057993==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==1057993==    by 0x404C4D: ft_calloc (in /home/eiglesia/Documents/Libft/libftTester/a.out)
==1057993==    by 0x40498D: main (ft_calloc_test.cpp:24)
==1057993== 
==1057993== 25 bytes in 1 blocks are definitely lost in loss record 2 of 2
==1057993==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==1057993==    by 0x404C4D: ft_calloc (in /home/eiglesia/Documents/Libft/libftTester/a.out)
==1057993==    by 0x404AAA: main (ft_calloc_test.cpp:38)
==1057993== */