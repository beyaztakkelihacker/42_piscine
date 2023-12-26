#include <stdio.h>

// Belirli bir uzunluktaki karakter dizilerini karşılaştıran fonksiyon
int ft_strncmp(const char *s1, const char *s2, unsigned int n) {
    unsigned int i = 0; // İndeks değişkenini sıfıra başlat
    // Döngü: iki karakter dizisi arasındaki her karakterin eşit olduğu ve n sayısına kadar devam eden süreçte kontrol et
    for (; i < n && s1[i] && s1[i] == s2[i]; i++);
    // İlk farklı karakterin ASCII değerlerinin farkını döndür
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main() {
    // İki string'i belirli bir uzunlukta karşılaştır ve sonucu ekrana yazdır
    printf("%d\n", ft_strncmp("Bayaztakkeli", "Beyaztakkeli", 5));
    // Yukarıdaki örnekte, ilk 5 karakter eşit olduğu için sonuç 0'dır.
    
    printf("%d\n", ft_strncmp("Beyaztakkeli", "beyaz takkeli", 5));
    // Yukarıdaki örnekte, ilk 5 karakterin ASCII değerlerinin farklı olduğu için sonuç negatif bir değerdir.
    
    printf("%d\n", ft_strncmp("beyaztakkeli", "beyaztakkeli", 5));
    // Yukarıdaki örnekte, ilk 5 karakter eşit olduğu için sonuç 0'dır.

    return 0;
}