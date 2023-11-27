#include"libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n)
		i++;
	if (i < n)
		return 0;
	else
		return 1;
}
