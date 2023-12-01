void *test4(void *foo, void *s, int c, size_t n)
{
	void *ptr;
	ptr = getfn(foo, void *, void *, int, size_t)(s, c, n);
	return ptr;
}
