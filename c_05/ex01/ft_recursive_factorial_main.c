#include <stdio.h>

// ft_recursive_factorial fonksiyonu: Verilen bir sayının faktöriyelini hesaplar (özyinelemeli yaklaşım)
int ft_recursive_factorial(int nb)
{
    // Eğer argüman geçerli değilse (negatifse)
    if (nb < 0)
    {
        return 0;
    }

    // Temel durum: 0'ın faktöriyeli 1'dir
    if (nb == 0)
    {
        return 1;
    }

    // Recursive durum: nb! = nb * (nb-1)!
    return nb * ft_recursive_factorial(nb - 1);
}

int main(void)
{
    // ft_recursive_factorial fonksiyonunu kullanarak 9'un faktöriyelini ekrana yazdır
    printf("%i", ft_recursive_factorial(9));

    return 0;
}