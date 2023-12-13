#include <stdio.h>

// Bir dizide sadece büyük harf karakterlerinin olup olmadığını kontrol eden fonksiyon
int ft_str_is_uppercase(char *str) {
    while (*str) {
        // Karakter, 'A' ile 'Z' aralığında değilse
        if (!(*str >= 'A' && *str <= 'Z')) {
            return 0; // 0 döndür ve işlemi sonlandır (büyük harf dışında bir karakter bulundu)
        }
        str++; // Bir sonraki karaktere geç
    }
    return 1; // Fonksiyonun bu noktaya ulaşması, sadece büyük harf karakterleri içerildiği anlamına gelir
}

int main() {
    // Fonksiyonu test et
    printf("%d\n", ft_str_is_uppercase("ABCDEFGH")); // 1 (sadece büyük harf karakterleri içeriyor)
    printf("%d\n", ft_str_is_uppercase("ABCDEFGHaI")); // 0 (büyük harf olmayan bir karakter içeriyor)
    printf("%d\n", ft_str_is_uppercase("-_134556ABCDEFGaH67")); // 0 (büyük harf dışında karakterler içeriyor)

    return 0;
}
