#include"libft.h"

void	*ft_memset(void *string, int value, size_t len)
{
	int i;
	char *ptr;

	i = 0;
	ptr = string;
	while(i < len)
		ptr[i++] = (unsigned char) value;
	return string;
}
