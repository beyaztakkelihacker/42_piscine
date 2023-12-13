#include <stdio.h>

// src dizisini dest dizisine kopyalayan fonksiyon
char *ft_strcpy(char *dest, char *src) {
    int i = 0;

    // src dizisinin sonuna kadar karakterleri kopyala
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // hedef dizisine null karakter ekle

    return dest; // kopyalanan diziyi döndür
}

int main() {
    char src[] = "beyaz takkeli hacker";
    char dest[] = "kara takkeli hacker";

    printf("%s\n", ft_strcpy(dest, src)); // kopyalama işlemini yap ve sonucu ekrana yazdır

    return 0;
}