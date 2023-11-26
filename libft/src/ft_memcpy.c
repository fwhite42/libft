#include<stdlib.h>
void *memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
	}
	return dst;
}
