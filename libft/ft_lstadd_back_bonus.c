/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:41:50 by fwhite42          #+#    #+#             */
/*   Updated: 2023/12/11 22:17:58 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	else if (!*lst)
	{
		*lst = new;
	}
	else
		ft_lstlast(*lst)->next = new;
}
