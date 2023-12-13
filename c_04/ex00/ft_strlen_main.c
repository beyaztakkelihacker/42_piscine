#include <stdio.h>

// ft_strlen fonksiyonu: Bir karakter dizisinin uzunluğunu hesaplar.
int ft_strlen(char *str) {
    int i = 0;
    
    // Karakter dizisi sonuna kadar dolaşılır.
    while (str[i]) {
        i++;
    }
    
    // Hesaplanan uzunluk değeri döndürülür.
    return i;
}

int main(void) {
    // ft_strlen fonksiyonu kullanılarak bir örnek uzunluk hesaplanır ve ekrana yazdırılır.
    printf("Uzunluk: %i\n", ft_strlen("854dsjfksdlk"));
    
    return 0;
}