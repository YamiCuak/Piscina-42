
#include <unistd.h>

void	ft_putnum(int n)
{
	n = n + 48;
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putnum(a / 10);
			ft_putnum(a % 10);
			write(1, " ", 1);

			ft_putnum(b / 10);
			ft_putnum(b % 10);

			if(!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return(0);
}*/
