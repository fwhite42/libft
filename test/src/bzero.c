#include<stdlib.h>
#include<string.h>
#include"libft.h"

#define getfn(ptr, output, ...) ((output(*)(__VA_ARGS__)) ptr)

int test_bzero(void *str, size_t len)
{
	char *str2;
	int test_result;

	str2 = (char *)malloc(strlen(str) + 1);
	str2 = strcpy(str2,str);
	getfn(&bzero, int, void*, size_t)(str, len);
	getfn(&ft_bzero, int, void*, size_t)(str2, len);
	test_result = strcmp(str,str2);
	return test_result;
}

int main(int ac, char **av)
{
	void *rdm;
	test_bzero(&rdm, atoi(av[1]));
}
