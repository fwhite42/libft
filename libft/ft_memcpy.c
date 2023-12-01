#include<stdlib.h>
void *memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	unsigned char* str;

	i = 0;
	str = dst;
	while (i < n)
	{
		str[i] = ((unsigned char*) src)[i];
		i++;
	}
	return dst;
}
