/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiglesia <eiglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:42:43 by eiglesia          #+#    #+#             */
/*   Updated: 2026/03/10 23:38:11 by eiglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	void	*aux;

	if (!lst)
		return (NULL);
	aux = f(lst->content);
	node = ft_lstnew(aux);
	if (!node)
		return (del(aux), NULL);
	if (lst->next)
		node->next = ft_lstmap(lst->next, f, del);
	if (!node->next && lst->next)
		return (del(node->content), free(node), NULL);
	return (node);
}
