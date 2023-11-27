int ft_atoi(const char *str)
{
	int nbr;
	while(*str)
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	return (nbr);
}
