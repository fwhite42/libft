#include<stdlib.h>

void ft_bzero(void *s, size_t n)
{
	int i;
	char *str;
	
	str = s;
	while(i < n)
		str[i++] = 0;
}
