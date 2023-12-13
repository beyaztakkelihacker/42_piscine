#include <stdio.h>

// Belirli bir uzunluktaki iki string'i birleştiren fonksiyon
char *ft_strncat(char *dest, char *src, unsigned int nb) {
    unsigned int x = 0;
    unsigned int y = 0;

    // dest string'inin sonuna kadar git
    while (dest[x]) {
        x++;
    }

    // Belirli bir uzunluktaki src string'ini dest string'ine ekleyerek birleştir
    while (y < nb && src[y]) {
        dest[x + y] = src[y];
        y++;
    }

    dest[x + y] = '\0'; // Birleşik string'in sonuna null karakter ekle

    return dest; // Birleştirilmiş string'i geri döndür
}

int main() {
    char src[] = "Network";
    char dest[] = "42 ";

    // ft_strncat fonksiyonunu kullanarak dest ve src string'lerini belirli bir uzunlukta birleştir
    printf("%s\n", ft_strncat(dest, src, 3));

    return 0;
}