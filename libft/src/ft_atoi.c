int ft_atoi(const char *str)
{
	int nbr;

	nbr = 0;
	while(*str)
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	return (nbr);
}
