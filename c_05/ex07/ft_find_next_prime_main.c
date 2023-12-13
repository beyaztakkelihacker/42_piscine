#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    
    // 1'den küçük veya eşit olan sayılar asal değildir
    if (nb < 2)
        return 0;
    
    // 2'den başlayarak nb'nin kareköküne kadar olan sayıları kontrol et
    while (i * i <= nb)
    {
        // Eğer nb, i'ye bölünüyorsa, asal değildir
        if (nb % i == 0)
            return 0;
        i++;
    }

    // Hiçbir bölen bulunmazsa, sayı asaldır
    return 1;
}

// Verilen sayıdan büyük veya eşit bir sonraki asal sayıyı bulan fonksiyon
int ft_find_next_prime(int nb)
{
    // 2'den küçükse, 2 bir sonraki asal sayıdır
    if (nb < 2)
        return 2;

    // nb'den başlayarak bir sonraki asal sayıyı bul
    while (!ft_is_prime(nb))
    {
        nb++;
    }

    return nb;
}

int main(void)
{
    printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
    printf("%d -> %d\n", 0, ft_find_next_prime(0));
    printf("%d -> %d\n", 1, ft_find_next_prime(1));
    printf("%d -> %d\n", 2, ft_find_next_prime(2));
    printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
    printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
    printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
    printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
    printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
    printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));

    return 0;
}