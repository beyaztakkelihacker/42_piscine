#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int say)
{
	if(say == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		write(1, "47483648", 8);
	}
		else if(say < 0)
		{
			ft_putchar('-');
			ft_putchar(-say);
		}
		else if(say > 9)
		{
			ft_putnbr(say / 10);
			ft_putnbr(say % 10);
		}
		else if(say < 10)
		{
			ft_putchar(say + 48);
		}
}

int	main()
{
	ft_putnbr(548);
}