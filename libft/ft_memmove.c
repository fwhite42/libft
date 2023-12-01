#include"libft.h"

void *memmove(void *dst, const void* src, size_t len)
{
	size_t i;
	char *ptr;

	i = 0;
	while(i < len)
	{
		ptr = dst + i;
		*ptr = ((char *)src)[i];
		i++;
	}
	return dst;
}
