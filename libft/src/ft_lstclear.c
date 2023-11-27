#include"libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	void *addr;

	addr = *lst;
	del(addr->content);
	*lst = *lst->next;
	ft_lstclear(lst, del);
	free(*addr)
}
