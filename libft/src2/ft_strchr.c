#include<stdio.h>
char *ft_strchr(char *s, int c)
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
	return (s);
}


int main(int ac, char** av)
{

	char *str = ft_strchr(av[1],*av[2]);
	printf("%s",str);
}
