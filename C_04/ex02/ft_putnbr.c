#include <unistd.h>

void	ft_putnbr(int nb)
{	
	int		i;
	int		mod;
	char	cmod[10];

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{	
		write(1, "-", 1);
		if (nb == -2147483648)
			write(1, "2147483648", 10);
		nb = nb * -1;
	}
	while (nb >= 1)
	{
		mod = nb % 10;
		nb = nb / 10;
		cmod[i] = mod + '0';
		i++;
	}
	while (--i >= 0)
		write(1, &cmod[i], 1);
}
