#include"libft.h"

char *strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	if (*little == 0)
		return (char *)big;
	while(big[i] && i < len)
	{

		while(little[j] == big[i])
		{
			j++;
			i++;
			if(little[j] == 0)
				return ((char *)big) + i - j;
		}
		j=0;
		i++;
	}
	return NULL;
}
