#include <stdio.h>
#include <stdlib.h>

// ft_atoi fonksiyonu, verilen karakter dizisini tamsayıya dönüştürür.
int ft_atoi(char *str) {
    // strtol fonksiyonu, stringi tamsayıya dönüştürür.
    // str pointer'ını günceller ve dönüştürülen tamsayıyı döndürür.
    return strtol(str, &str, 0);
}

int main(void) {
    // Test için örnek bir karakter dizisi
    char *s = "-1234567";
    
    // ft_atoi fonksiyonunu kullanarak bir karakter dizisini tamsayıya dönüştür ve ekrana yazdır
    printf("%d\n", ft_atoi(s));

    return 0;
}