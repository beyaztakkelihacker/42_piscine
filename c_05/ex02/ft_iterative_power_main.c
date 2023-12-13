#include <stdio.h>

// ft_iterative_power fonksiyonu: Bir sayının belirli bir üssüne göre güçlendirmesini hesaplar (iteratif yaklaşım)
int ft_iterative_power(int nb, int power)
{
    int result = 1;

    // power değeri 0 veya negatifse, hemen 1 döndür
    if (power <= 0)
    {
        return result;
    }

    // Güçlendirme işlemini gerçekleştiren döngü
    while (power > 0)
    {
        result *= nb;
        power--;
    }

    return result;
}

int main(void)
{
    // ft_iterative_power fonksiyonunu kullanarak 3'ün 4. kuvvetini hesapla ve ekrana yazdır
    printf("%i", ft_iterative_power(3, 4));

    return 0;
}