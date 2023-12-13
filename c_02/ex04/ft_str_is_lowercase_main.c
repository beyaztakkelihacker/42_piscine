#include <stdio.h>

// Bir dizide sadece küçük harf karakterlerinin olup olmadığını kontrol eden fonksiyon
int ft_str_is_lowercase(char *str) {
    while (*str) {
        // Karakter, 'a' ile 'z' aralığında değilse
        if (*str < 'a' || *str > 'z') {
            return 0; // 0 döndür ve işlemi sonlandır (küçük harf dışında bir karakter bulundu)
        }
        str++; // Bir sonraki karaktere geç
    }
    return 1; // Fonksiyonun bu noktaya ulaşması, sadece küçük harf karakterleri içerildiği anlamına gelir
}

int main() {
    printf("%d\n", ft_str_is_lowercase("abcdefghijkl"));     // 1 (sadece küçük harf karakterleri içeriyor)
    printf("%d\n", ft_str_is_lowercase("abcAdefghijkl"));     // 0 (küçük harf olmayan bir karakter içeriyor)
    printf("%d\n", ft_str_is_lowercase("-_134556efSghij67")); // 0 (küçük harf dışında karakterler içeriyor)

    return 0;
}