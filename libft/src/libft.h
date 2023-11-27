#ifndef LIBFT_H
# define LIBFT_H
#include<unistd.h>
# include<stdio.h>
# include<stdlib.h>

void	ft_bzero(const char *str, size_t n);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	ft_putnbr_fd(int n, int fd);
char *ft_itoa(int n);

typedef  struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void));
void ft_lstiter(t_list *lst, void (*f)(void *));
#endif
