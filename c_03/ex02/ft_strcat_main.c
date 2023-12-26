#include <stdio.h>

// Belirli bir uzunluktaki karakter dizilerini birleştiren fonksiyon
char *ft_strcat(char *dest, const char *src) {
    char *result = dest; // Başlangıç adresini sakla

    // dest string'inin sonuna git
    while (*dest) dest++;

    // src string'ini dest string'inin sonuna ekleyerek birleştir
    while ((*dest++ = *src++));

    return result; // Birleştirilmiş string'in başlangıç adresini geri döndür
}

int main() {
    char src[] = "Takkeli";
    char dest[] = "Beyaz ";

    // ft_strcat fonksiyonunu kullanarak dest ve src string'lerini birleştir
    ft_strcat(dest, src);

    printf("%s\n", dest); // Birleştirilmiş string'i ekrana yazdır

    return 0;
}