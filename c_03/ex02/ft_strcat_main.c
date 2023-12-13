#include <stdio.h>

// İki string'i birleştiren fonksiyon
char *ft_strcat(char *dest, const char *src) {
    int x = 0;

    // dest string'inin sonuna kadar git
    while (dest[x]) {
        x++;
    }

    int y = 0;

    // src string'ini dest string'inin sonuna ekleyerek birleştir
    while (src[y]) {
        dest[x + y] = src[y];
        y++;
    }

    dest[x + y] = '\0'; // Birleşik string'in sonuna null karakter ekle

    return dest; // Birleştirilmiş string'i geri döndür
}

int main() {
    char src[] = "Takkeli";
    char dest[] = "Beyaz ";

    // ft_strcat fonksiyonunu kullanarak dest ve src string'lerini birleştir
    ft_strcat(dest, src);

    printf("%s\n", dest); // Birleştirilmiş string'i ekrana yazdır

    return 0;
}