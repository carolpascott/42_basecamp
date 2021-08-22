int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb - 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (n > 1)
	{
		nb = nb * n;
		n--;
	}
	return (nb);
}
