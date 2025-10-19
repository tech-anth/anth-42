/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:31:18 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/19 22:09:11 by akolomii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	clear(t_list *list, void *elem, void (*del)(void *))
{
	if (del)
		del(elem);
	ft_lstclear(&list, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*nl;
	void	*lm_elem;

	if (!f || !lst)
		return (NULL);
	nl = NULL;
	while (lst != NULL)
	{
		lm_elem = f(lst->content);
		if (!lm_elem)
		{
			ft_lstclear(&nl, del);
			return (NULL);
		}
		node = ft_lstnew(lm_elem);
		if (!node)
		{
			clear(nl, lm_elem, del);
			return (NULL);
		}
		ft_lstadd_back(&nl, node);
		lst = lst->next;
	}
	return (nl);
}
