int ft_atoi(const char *str)
{
	int i;
	int nbr;
	
	while(str[i])
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr);
}
