#include"libft.h"

void	*ft_memset(void *string, int value, size_t len)
{
	size_t i;
	char *ptr;

	i = 0;
	ptr = string;
	while(i < len)
		ptr[i++] = (unsigned char) value;
	return string;
}
