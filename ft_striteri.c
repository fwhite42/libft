/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_striteri.c                                           4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 20:23:36 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 20:26:56 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (*s)
		f(i++, s++);
}
