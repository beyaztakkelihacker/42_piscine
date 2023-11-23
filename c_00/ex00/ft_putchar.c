#include <unistd.h>

void	ft_putchar(char c) // Fonksiyonumuzda bir char parametresi istiyoruz
{
	write(1, &c, 1); // Fonksiyonun istediği char parametresini yazdırır
}