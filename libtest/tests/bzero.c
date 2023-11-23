#include"libtest.h"

int main(int ac, char **av)
{
	void *rdm;
	test_bzero(&rdm, atoi(av[1]));
}
