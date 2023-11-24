#include<stdlib.h>
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

int main(int ac, char **av)
{
	int nbr;
	test_atoi(av[1]);
	return (0);
}
