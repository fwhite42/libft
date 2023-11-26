void *memmove(void *dst, const void* src, size_t len)
{
	int i = 0;

	while(i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return dst;
}
