#include <stdio.h>

// ft_putnbr fonksiyonu: Verilen tamsayıyı ekrana yazdıran fonksiyon
void ft_putnbr(int nb) {
    // Negatif sayı durumunda eksi işaretini ekrana yazdır ve pozitif yap
    nb < 0 && putchar('-') && (nb = -nb);

    // Tamsayının onlar basamağından bir önceki basamağa kadar olan kısmı için recursive çağrı
    nb >= 10 && ft_putnbr(nb / 10);

    // Son basamak değerini ekrana yazdır
    putchar(nb % 10 + '0');
}

int main(void) {
    // Test için ft_putnbr fonksiyonunu kullanarak bir tamsayıyı ekrana yazdır
    ft_putnbr(42);

    // Yeni bir satır çıktısı ver
    putchar('\n');

    return 0;
}