char *strrchr(const char *s, int c)
{
	char	*ptr;
	char	*str;

	str = s;
	ptr = NULL;
	while (*str)
	{	
		if (*str == c)
			ptr = str
		str++;
	}
	return ptr;
}
