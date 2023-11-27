#include"libft.h"

static int nbr_of_digits(n)
{
	int i;
	i = 0;

	if (n < 0)
	{
		n = -n;
		i++;
	}
	while(n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void ft_putnbr_fd(int n, int fd)
{
	write(fd, ft_itoa(n), nbr_of_digits(n));
}
