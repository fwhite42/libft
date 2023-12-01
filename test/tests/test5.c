int test5(void *compare, void *s1, void *s2, size_t len)
{
	int x;
	x = getfn(compare, int, void*, void*, size_t len);
	printf("%i", x);
	return x;
}
