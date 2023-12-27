#include <stdio.h>

// Karakter dizisini standart çıkış üzerinde görüntülemek için bir fonksiyon
void ft_putstr(char *str) {
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
}

int main(void) {
    // ft_putstr örneğinin kullanımı
    char i[] = "6165";
    ft_putstr(i);

    // Yeni bir satır çıktısı ver
    putchar('\n');

    return 0;
}
