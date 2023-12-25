#include <stdio.h>
#include <string.h>

// src dizisini dest dizisine kopyalayan fonksiyon
char *ft_strcpy(char *dest, const char *src) {
    return strcpy(dest, src); // strcpy fonksiyonu kullanarak src'yi dest'e kopyala
}

int main() {
    char src[] = "beyaz takkeli hacker";
    char dest[] = "kara takkeli hacker";

    // ft_strcpy fonksiyonunu çağırarak kopyalama işlemini gerçekleştir
    printf("Source: %s\n", src); // Kaynak diziyi ekrana yazdır
    printf("Destination (before): %s\n", dest); // Hedef diziyi (önce) ekrana yazdır

    ft_strcpy(dest, src); // ft_strcpy fonksiyonu ile src'yi dest'e kopyala

    printf("Destination (after): %s\n", dest); // Hedef diziyi (sonra) ekrana yazdır

    return 0;
}
