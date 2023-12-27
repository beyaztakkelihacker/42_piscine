#include <unistd.h>

// ft_putstr fonksiyonu: Bir karakter dizisini standart çıkışa yazdırır.
void ft_putstr(char *str) {
    while (*str) write(1, str++, 1);
    write(1, "\n", 1);
}

// main fonksiyonu: ft_putstr fonksiyonunu çağırarak "Hello World!" yazdırılır.
int main(void) {
    ft_putstr("Hello World!");
    return 0;
}