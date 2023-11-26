#include<stdlib.c>

void *memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
		if (s[i] == c)
		return s + i;
	return NULL;
}
