#include<stdlib.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	while(i < n)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	return (0);
}
