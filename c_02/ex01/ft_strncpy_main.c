#include <stdio.h>

// src dizisinin belirtilen uzunluk kadarını dest dizisine kopyalayan fonksiyon
char *ft_strncpy(char *dest, char *src, unsigned int n) {
    unsigned int i = 0;

    // src dizisinin sonuna veya n değerine ulaşana kadar karakterleri kopyala
    while (src[i] && i < n) {
        dest[i] = src[i];
        i++;
    }

    // Eğer kopyalanan karakter sayısı n değerine ulaşmamışsa, kalan kısmı null karakterlerle doldur
    while (i < n) {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

int main() {
    char src[] = "beyaztakkelihacker";
    char dest[10];

    printf("%s\n", ft_strncpy(dest, src, 2)); // İlk 2 karakteri kopyala
    printf("%s\n", ft_strncpy(dest, src, 4)); // İlk 4 karakteri kopyala
    printf("%s\n", ft_strncpy(dest, src, 6)); // İlk 6 karakteri kopyala

    return 0;
}