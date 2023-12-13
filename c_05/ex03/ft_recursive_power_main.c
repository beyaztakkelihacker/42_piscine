#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    // Temel durum: 0^0 ifadesi 1 olarak tanımlanmıştır
    if (nb == 0 && power == 0)
    {
        return 1;
    }

    // Güç negatifse, hemen 0 döndür
    if (power < 0)
    {
        return 0;
    }

    // Recursive durum
    if (power > 0)
    {
        // nb^power = nb * (nb^(power-1))
        return nb * ft_recursive_power(nb, power - 1);
    }
    else // power == 0
    {
        // 0'dan farklı bir sayının 0. kuvveti 1'dir
        return 1;
    }
}

int main(void)
{
    // 5'in 1. kuvvetini hesapla ve ekrana yazdır
    printf("%i", ft_recursive_power(5, 3));
    return 0;
}