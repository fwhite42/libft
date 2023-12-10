/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 08:49:19 by fwhite42          #+#    #+#             */
/*   Updated: 2023/12/09 08:50:28 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static inline void	*ft_memcpy_r(void *dst, const void *src, size_t len)
{
	while (len)
	{
		((char *)dst)[len - 1] = ((char *)src)[len - 1];
		len--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == src)
		return (dst);
	if (src < dst && src + len > dst)
		return (ft_memcpy_r(dst, src, len));
	else
		return (ft_memcpy(dst, src, len));
}
