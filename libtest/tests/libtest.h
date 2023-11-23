#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<string.h>

#include"libft.h"

#define getfn(ptr, output, ...) ((output(*)(__VA_ARGS__)) ptr)

int test_atoi(const char *arg)
{
	int x = getfn(&atoi, int, const char*)(arg);
	int y =	getfn(&ft_atoi, int, const char*)(arg);
	int test_result = x == y;
	printf("%i\n",x);
	printf("%i\n",y);
	printf("%i\n",test_result);
	return test_result;
}

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
