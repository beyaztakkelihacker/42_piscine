#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb) {
    char *result = dest; // Başlangıç adresini sakla

    while (*dest) dest++; // dest string'inin sonuna git

    unsigned int y = 0; // y'yi burada tanımla

    // Belirli bir uzunluktaki src string'ini dest string'ine ekleyerek birleştir
    for (; y < nb && (*dest++ = *src++); y++);

    *dest = '\0'; // Birleşik string'in sonuna null karakter ekle

    return result; // Birleştirilmiş string'in başlangıç adresini geri döndür
}

int main() {
    char src[] = "Network";
    char dest[] = "42 ";

    // ft_strncat fonksiyonunu kullanarak dest ve src string'lerini belirli bir uzunlukta birleştir
    printf("%s\n", ft_strncat(dest, src, 3));

    return 0;
}