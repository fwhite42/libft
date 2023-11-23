#include<stdio.h>
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int i;

	i = 0;
	while(i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	while(src[i])
		i++;

	return (i);
}
