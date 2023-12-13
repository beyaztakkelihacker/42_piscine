#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    // 1'den küçük ve eşit olan sayılar asal değildir
    if (nb <= 1)
        return 0;

    i = 2;

    // Potansiyel bölenleri kontrol etmek için döngü
    while (i <= (nb / 2))
    {
        // Eğer nb, i'ye bölünüyorsa, asal değildir
        if (!(nb % i))
            return 0;
        else
            i += 1;  // i'yi bir artır, diğer bölenleri kontrol et
    }

    // Eğer hiçbir bölen bulunmazsa, sayı asaldır
    return 1;
}

int main(void)
{
    printf("%d -> %d\n", -3965, ft_is_prime(-3965));
    printf("%d -> %d\n", -12, ft_is_prime(-12));
    printf("%d -> %d\n", 0, ft_is_prime(0));
    printf("%d -> %d\n", 1, ft_is_prime(1));
    printf("%d -> %d\n", 2, ft_is_prime(2));
    printf("%d -> %d\n", 4219, ft_is_prime(4219));
    printf("%d -> %d\n", 7853, ft_is_prime(7853));
    printf("%d -> %d\n", 78989, ft_is_prime(78989));
    printf("%d -> %d\n", 2147483647, ft_is_prime(2147483647));

    return 0;
}