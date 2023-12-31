/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 08:47:19 by fwhite42          #+#    #+#             */
/*   Updated: 2023/12/09 08:55:45 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
		while (*s)
			s++;
	else
	{
		while (*s != (char) c)
		{
			if (*s == 0)
				return (NULL);
			s++;
		}
	}
	return ((char *)s);
}
