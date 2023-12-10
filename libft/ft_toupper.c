/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 08:38:55 by fwhite42          #+#    #+#             */
/*   Updated: 2023/12/09 08:39:36 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static inline int	ft_islowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	if (ft_islowercase(c))
		c -= 'a' - 'A';
	return (c);
}
