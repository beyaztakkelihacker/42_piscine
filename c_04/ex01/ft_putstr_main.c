#include <unistd.h>

// ft_putstr fonksiyonu: Bir karakter dizisini standart çıkışa yazdırır.
void ft_putstr(char *str) {
    int i = 0;
    
    // Karakter dizisi sonuna kadar dolaşılır.
    while (str[i]) {
        // write fonksiyonu kullanılarak karakterler tek tek yazdırılır.
        if (write(1, &str[i], 1) == -1) {
            // Hata durumunda gerekli aksiyonu burada alabilirsiniz.
            return;
        }
        i++;
    }

    // Yazdırma işlemi tamamlandıktan sonra yeni satıra geçilir.
    write(1, "\n", 1);
}

// main fonksiyonu: ft_putstr fonksiyonunu çağırarak "Hello World!" yazdırılır.
int main(void) {
    ft_putstr("Hello World!");
    
    return 0;
}