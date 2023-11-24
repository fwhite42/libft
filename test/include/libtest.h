#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<string.h>

#include"libft.h"

#define getfn(ptr, output, ...) ((output(*)(__VA_ARGS__)) ptr)

int test_atoi(const char *arg);

int test_bzero(void *str, size_t len);
