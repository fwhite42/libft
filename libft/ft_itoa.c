#include"libft.h"

static int	_len(n)
{
	int	i;

	if (!n)
		return (1);
	i = 0;
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

	if (n < 0)
	{
		buff = (char *)malloc(_len(n) + 2);
		*buff = '-';
		buff++;
		_itoa(&buff, -n);
		buff--;
	}
	else
	{
		buff = (char *)malloc(_len(n) + 2);
		_itoa(&buff,n);
	}
	return (buff - (_len(n) - 1));
}
