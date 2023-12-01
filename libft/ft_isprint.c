#include"libft.h"

int ft_isprint(int c)
{
	if(c >= 32 && ft_isascii(c))
		return 1;
	return (0);
}
