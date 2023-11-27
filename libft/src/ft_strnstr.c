char *strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (*little == 0)
		return big;
	while(big[i])
	{

		while(little[j] = big[i])
		{
			j++;
			i++;
			if(little[j] == 0)
				return i - j;
		}
		j=0;
		i++;
	}
	return NULL;
}
