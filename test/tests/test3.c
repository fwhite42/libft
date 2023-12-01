#include"libtest.h"

// int ---> char*
char *test3(void *foo, int n)
{
	char *s;
	s = getfn(foo, int, char*)(n);
	return s;
}
