#include <stdio.h>

// ft_iterative_factorial fonksiyonu: Verilen bir sayının faktöriyelini hesaplar (iteratif yaklaşım)
int ft_iterative_factorial(int nb)
{
    unsigned int result = 1; // Sonucu hesaplamak için kullanılacak değişkeni başlangıç değeriyle tanımla (faktöriyel her zaman pozitif olduğundan unsigned int kullanılabilir)

    // nb pozitif olduğu sürece döngü devam eder
    while (nb > 0)
    {
        result *= nb; // Sonucu nb ile çarp ve result değişkenine ata
        nb--;         // nb'yi bir azalt, böylece bir sonraki adımda bir önceki sayı ile çarpılacak
    }

    // Eğer nb negatifse, faktöriyel tanımsız olduğu için 0 döndür
    if (nb < 0)
    {
        return 0;
    }

    // Hesaplanan faktöriyeli döndür
    return result;
}

int main(void)
{
    // ft_iterative_factorial fonksiyonunu kullanarak 3'ün faktöriyelini ekrana yazdır
    printf("%i", ft_iterative_factorial(3));
    
    return 0;
}