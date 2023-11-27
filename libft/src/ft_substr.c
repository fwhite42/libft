char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	str = (char *)malloc(len + 1);
	ft_strlcpy(str, s + start,len + 1);
}
