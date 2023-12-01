#include<stdio.h>
char *ft_strchr(const char *s, int c)
{
	if (c == 0)
	{
		while(*s)
			s++;
	}
	else
	{
		while(*s != (char) c)
		{
			if (*s == 0)
				return (NULL);
			s++;
		}
	}
	return ((char *)s);
}
