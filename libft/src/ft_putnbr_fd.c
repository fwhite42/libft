void ft_putnbr_fd(int n, int fd)
{
	write(fd, ft_itoa(n), len(n));
}
