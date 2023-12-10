/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:31:37 by fwhite42          #+#    #+#             */
/*   Updated: 2023/12/10 17:57:28 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*first;

	if (!lst | !f)
		return (NULL);
	first = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, node);
		lst = lst->next;
	}
	return (first);
}


/*
 *
 *#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *first = NULL;
    t_list *new_node;

    if (!lst || !f)
        return (NULL);

    while (lst)
    {
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            ft_lstclear(&first, del);
            return (NULL);
        }

        ft_lstadd_back(&first, new_node);
        lst = lst->next;
    }

    return (first);
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return;

    del(lst->content);
    free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (!lst || !del || !(*lst))
        return;

    t_list *current = *lst;
    t_list *next_node;

    while (current)
    {
        next_node = current->next;
        ft_lstdelone(current, del);
        current = next_node;
    }

    *lst = NULL;
}

 * */
