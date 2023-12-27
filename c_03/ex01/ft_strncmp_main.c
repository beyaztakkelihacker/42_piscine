#include <stdio.h>
#include <string.h>

// ft_strncmp fonksiyonu: Verilen iki string'in ilk n karakterini karşılaştırır.
int ft_strncmp(char *s1, char *s2, unsigned int n) {
    return strncmp(s1, s2, n);
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