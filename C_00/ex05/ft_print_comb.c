#include <unistd.h>

void	ft_putchar(char x, char y, char z);

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{
		while ((y > '0') && (y <= '8'))
		{
			while ((z > '0') && (z <= '9'))
			{
				ft_putchar(x, y, z);
				z++;
			}
			z = y + 2;
			y++;
		}
		y = x + 1;
		x++;
	}
}

void	ft_putchar(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if ((x == '7') && (y == '8') && (z == '9'))
	{	
	}
	else
	{
		write (1, ", ", 2);
	}
}
