#include <stdio.h>
#include <unistd.h>

// ft_putchar fonksiyonu: Bir karakteri standart çıkışa yazdırır.
void ft_putchar(char c) {
    write(1, &c, 1);
}

// ft_putnbr fonksiyonu: Bir tamsayıyı standart çıkışa yazdırır.
void ft_putnbr(int nb) {
    // Özel durum: Minimum tamsayı değeri (-2147483648)
    if (nb == -2147483648) {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    // Negatif sayı ise işareti yazdır ve pozitife çevir
    else if (nb < 0) {
        ft_putchar('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    // Sayı ondan büyükse onlar basamağına kadar böler ve ekrana yazdırır
    else if (nb > 9) {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    // Tek haneli sayıysa doğrudan yazdırır
    else
        ft_putchar(nb + '0');  // 48 eklemek yerine '0' (ASCII değeri) kullanabilirsiniz
}

int main(void) {
    // ft_putnbr fonksiyonunu kullanarak bir tamsayıyı yazdırır
    ft_putnbr(4563);
    
    // Her zaman yeni bir satır ekleyin
    ft_putchar('\n');
    
    // Ana fonksiyon başarıyla tamamlandı.
    return 0;
}