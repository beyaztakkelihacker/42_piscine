#include <stdio.h>

// Verilen bir sayının karekökünü bulan fonksiyon
int ft_sqrt(int nb)
{
    long index;
    long b;

    // Negatif sayılar ve sıfır için kontrol
    b = nb;
    if (b <= 0)
    {
        return 0;
    }

    // 1 için özel durum
    if (b == 1)
    {
        return 1;
    }

    // 2 veya daha büyük sayılar için iteratif karekök hesaplama
    index = 2;
    if (b >= 2)
    {
        while (index * index <= b)
        {
            if (index * index == b)
            {
                return index;
            }
            index++;
        }
    }

    // Eğer kesirli bir karekök bulunamazsa
    return 0;
}

int main(void)
{
    printf("sqrt of %d is %d\n", -20, ft_sqrt(-20));
    printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
    printf("sqrt of %d is %ld\n", 1, ft_sqrt(1));  // %ld format belirleyicisi kullanıldı
    printf("sqrt of %d is %ld\n", 2, ft_sqrt(2));  // %ld format belirleyicisi kullanıldı
    printf("sqrt of %d is %ld\n", 20, ft_sqrt(20)); // %ld format belirleyicisi kullanıldı
    return 0;
}