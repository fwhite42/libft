#include"libft.h"

void *memchr(const void *s,  int c, size_t n)
{
	unsigned char *bytes = (unsigned char *) s;
	while(*bytes++ != (unsigned int) c && n--)
		;
	if (n == -1)
		return NULL;
	return (bytes - 1);
}
