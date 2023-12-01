#include"libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char  *str;
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while(ft_strchr(set, s1[i]))
	{
		i++;
	}
	while(ft_strchr(set,s1[len-1-j]))
	{
		j++;
	}
	len = len - 1 - j - i;
	str = (char *)malloc(len);
	ft_strlcpy(str, s1 + i, len);
	return (str);
}
