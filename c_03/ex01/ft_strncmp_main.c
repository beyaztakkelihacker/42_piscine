#include <stdio.h>

// Belirli bir uzunluktaki karakter dizilerini karşılaştıran fonksiyon
int ft_strncmp(const char *s1, const char *s2, unsigned int n) {
    if (n == 0) {
        return 0; // Uzunluk 0 ise, her iki string de eşittir
    }

    unsigned int i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1) {
        i++;
    }

    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main() {
    // İki string'i belirli bir uzunlukta karşılaştır ve sonucu ekrana yazdır
    printf("%d\n", ft_strncmp("Bayaztakkeli", "Beyaztakkeli", 5)); // 0 (ilk 5 karakter eşittir)
    printf("%d\n", ft_strncmp("Beyaztakkeli", "beyaz takkeli", 5)); // Negatif değer (ilk 5 karakterin ASCII değerlerinin farkı)
    printf("%d\n", ft_strncmp("beyaztakkeli", "beyaztakkeli", 5)); // 0 (ilk 5 karakter eşittir)

    return 0;
}