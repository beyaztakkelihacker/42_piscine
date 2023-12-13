// Açıklama: Bu fonksiyon, iki tamsayı değeri arasında değişim yaparak (swap) değerleri yer değiştirir.
void ft_swap(int *a, int *b)
{
    int tmp = *a; // Geçici bir değişken tanımla ve a'nın değerini geçici değişkene ata.

    *a = *b; // a'nın değerini b'ye, b'nin değerini de geçici değişkene ata.
    *b = tmp;
}

#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    // İlk olarak, değerleri ekrana yazdır.
    printf("Before swap: x = %d, y = %d\n", x, y);

    // ft_swap fonksiyonunu çağırarak değerleri değiştir.
    ft_swap(&x, &y);

    // Değiştirilmiş değerleri ekrana yazdır.
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
