#include"libft.h"

void *memmove(void *dst, const void* src, size_t len)
{
	int i = 0;
	char *ptr;

	while(i < len)
	{
		ptr = dst + i;
		*ptr = ((char *)src)[i];
		i++;
	}
	return dst;
}
