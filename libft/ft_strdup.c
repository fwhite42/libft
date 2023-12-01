#include"libft.h"

char *ft_strdup(const char *s)
{
	int len;

	len = ft_strlen(s);
	return (char *)ft_memcpy(malloc(len), s, len);
}
