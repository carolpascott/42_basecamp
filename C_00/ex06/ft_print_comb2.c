#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d);
void	ft_print_seq(char a, char b, char c, char d);

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_print_seq(a, b, c, d);
}

void	ft_print_seq(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_putchar(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = '0';
		c = a;
		d = b + 1;
	}
}

void	ft_putchar(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 2);
	write (1, &c, 1);
	write (1, &d, 1);
	if ((a == '9') && (b == '8') && (c == '9') && (d == '9'))
	{	
	}
	else
	{
		write (1, ", ", 2);
	}
}
