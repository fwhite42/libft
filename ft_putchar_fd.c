/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_putchar_fd.c                                         4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 20:23:06 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 20:28:32 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
