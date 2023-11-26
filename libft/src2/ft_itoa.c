#include<stdio.h>
#include<stdlib.h>

static int foo0(n)
{
	int i;
	i = 0;
	if (n == 0)
	{
		return (1);
	}
	while(n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void foo1(char **memory, int n)
{
	if (n > 9)
	{
		foo1(memory, n / 10);
		*memory = *memory + 1;
	}
	**memory = (n % 10) + '0';
}

char *ft_itoa(int n)
{
	int size;
	char *memory;

	size = foo0(n);
	memory = (char *)malloc(size + 1);
	foo1(&memory, n);
	return memory - size + 1;
}

int main(int ac, char **av)
{
	char *str = ft_itoa(atoi(av[1]));
	printf("> %s",str);
}
