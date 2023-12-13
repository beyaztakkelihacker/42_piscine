#include <stdio.h>

// Bir dizide sadece yazdırılabilir karakterlerin olup olmadığını kontrol eden fonksiyon
int ft_str_is_printable(char *str) {
    int i = 0;

    while (str[i]) {
        // Karakter, ASCII tablosundaki 32 (boşluk) ile 126 (tilde) aralığında değilse
        if (str[i] < 32 || str[i] > 126) {
            return 0; // 0 döndür ve işlemi sonlandır (yazdırılabilir olmayan bir karakter bulundu)
        }
        i++; // Bir sonraki karaktere geç
    }

    return 1; // Fonksiyonun bu noktaya ulaşması, sadece yazdırılabilir karakterler içerildiği anlamına gelir
}

int main() {
    printf("%d\n", ft_str_is_printable("ABDELKFSCO?I340990%")); // 1 (sadece yazdırılabilir karakterler içeriyor)
    printf("%d\n", ft_str_is_printable("\n\t\v\f")); // 0 (yazdırılabilir olmayan karakterler içeriyor)

    return 0;
}