#include"libft"

void lstprint(t_list *lst)
{
	printf("List[")
	while(lst)
	{
		printf("%p", lst->content)
		lst = lst->next
		if (lst)
			printf(", ")
	}
	printf("]");
}
