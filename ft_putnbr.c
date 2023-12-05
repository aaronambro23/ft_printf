void	ft_putnbr(int nb)
{
	long	number;

	number = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	ft_putchar(number % 10 + '0');
}
