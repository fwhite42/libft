#include"libft.h"
/*
void memprint(void *mem, size_t len)
{

	printf("Buffer<");
	while(len--)
	{
		printf("%x", *(unsigned char *)mem);
		if (len)
			printf(" ");
			mem++;
	}
	printf(">\n");
}
*/

char **ft_split(const char *src, char space)
{
	char **lst;
	char *cpy;
	size_t len;
	int wc;
	size_t i;
	
	len = 0;
	wc = 0;
	i = 0;
	if (!src && space == 0)
		return (NULL);
	cpy = ft_strtrim(src, &space);
//	memprint(cpy, ft_strlen(cpy));
//	printf("trimmed : <%s>\n", cpy);
	if (!cpy)
		return (NULL);
	while (cpy[len])
	{
//		printf("%zu) check if '%c' == '%c'\n", len, cpy[len], space);
		if (cpy[len] == space)
		{
//			printf("\t> YES ! replacing %c with 0\n", space);
			cpy[len] = 0;
			if (len > 0 && cpy[len - 1] != 0)
			{
//				printf("\t> a word just ended!\n");
				wc++;
			}
		}
		len++;
	}
//	memprint(cpy, len);
	if (len > 0 && cpy[len - 1] != 0)
	{
		wc++;
//		printf("the source is null terminaed: word count += 1\n");
	}
//	printf("word count: %i\n", wc);
	lst = (char **) malloc(sizeof(char *) * (wc + 1));
	if (!lst)
	{
		free(cpy);
		return NULL;
	}
//	printf("allocated memory for the split addresses \n");

	while(i < len)
	{
		if (i == 0 || (cpy[i] != 0 && cpy[i - 1] == 0))
			*lst++ = &cpy[i];
		i++;
	}
	*lst = NULL;

	return (lst - wc);
}

/*
int main(int ac, char **av)
{
	char **split = ft_split(av[1],av[2][0]);
	char **test = ft_split("split  ||this|for|me|||||!|", '|');
	printf("SPLIT:\n");
	while(*split)
		printf(">'%s'\n", *(split++));
	while(*test)
		printf("--> '%s'\n",*(test++));
	return (1);
}
*/
