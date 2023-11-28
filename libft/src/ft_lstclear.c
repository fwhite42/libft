#include"libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *node;

	while (*lst != NULL)
	{
		node = *lst;
		*lst = node->next;
		del(node->content);
		free(node);
	}
}
