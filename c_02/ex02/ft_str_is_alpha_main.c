#include <stdio.h>
#include <ctype.h>

// Bir dizide sadece harf karakterlerinin olup olmadığını kontrol eden fonksiyon
int ft_str_is_alpha(char *str) 
{
    while (*str) 
    {
        // Harf olmayan bir karakter bulunduğunda
        if (!isalpha(*str)) 
        {
            return 0; // 0 döndür ve işlemi sonlandır
        }
        str++; // Bir sonraki karaktere geç
    }
    return 1; // Fonksiyonun bu noktaya ulaşması, sadece harf karakterleri içerildiği anlamına gelir
}

int main() 
{
    // Test için örnekler
    printf("%d\n", ft_str_is_alpha("abcdefghijkl")); // 1 (sadece harf karakterleri içeriyor)
    printf("%d\n", ft_str_is_alpha("abc1defghijkl")); // 0 (harf olmayan bir karakter içeriyor)
    printf("%d\n", ft_str_is_alpha("")); // 1 (boş dizi, herhangi bir harf içermiyor)

    return 0;
}