/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:31:37 by fwhite42          #+#    #+#             */
/*   Updated: 2023/12/09 09:32:36 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static inline t_list	*morph(t_list *node, void *(*f)(void *))
{
	return (ft_lstnew(f(node->content)));
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*first;

	if (!lst)
		return (NULL);
	node = morph(lst, f);
	if (!node)
		return (NULL);
	first = node;
	while (lst->next)
	{
		node->next = morph(lst->next, f);
		if (node->next == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		lst = lst->next;
		node = node->next;
	}
	return (first);
}
