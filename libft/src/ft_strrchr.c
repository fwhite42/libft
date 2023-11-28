#include"libft.h"

char *strrchr(const char *s, int c)
{
	char	*ptr;
	char	*str;

	str = (char *)s;
	ptr = NULL;
	while (*str)
	{	
		if (*str == c)
			ptr = str;
		str++;
	}
	return ptr;
}
