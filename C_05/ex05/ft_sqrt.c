int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0 || nb > 2147395600)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i != nb && i <= nb)
		i++;
	if (i == nb + 1)
		return (0);
	else
		return (i);
}
