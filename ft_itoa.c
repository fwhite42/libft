/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_itoa.c                                               4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/05/11 20:22:43 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/05/11 20:28:00 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<limits.h>
#include<stdlib.h>

static int	_len(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		return (_len(-n) + 1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	_itoa(char **buff, int n)
{
	if (n > 9)
	{
		_itoa(buff, n / 10);
		(*buff)++;
	}
	**buff = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*buff;
	int		len;

	if (n == INT_MIN)
	{
		buff = (char *)malloc(12);
		if (!buff)
			return (NULL);
		ft_strlcpy(buff, "-2147483648", 12);
		return (buff);
	}
	len = _len(n);
	buff = (char *)malloc(len + 1);
	if (!buff)
		return (NULL);
	if (n < 0)
	{
		*buff = '-';
		buff++;
		n = -n;
	}
	_itoa(&buff, n);
	buff[1] = 0;
	return (buff - len + 1);
}
