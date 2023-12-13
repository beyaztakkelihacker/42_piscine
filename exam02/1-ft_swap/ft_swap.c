#include <stdio.h>

// Açıklama: Bu fonksiyon, iki tamsayıyı takas eder.
void ft_swap(int *a, int *b)
{
    int tmp;

    // Geçici bir değişken kullanarak a ve b'nin değerlerini takas et.
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    // Örnek tamsayılar
    int x = 5;
    int y = 10;

    // Değişimden önce değerleri yazdır
    printf("Değişimden önce: x = %d, y = %d\n", x, y);

    // ft_swap fonksiyonunu çağırarak x ve y değerlerini takas et
    ft_swap(&x, &y);

    // Değişimden sonra değerleri yazdır
    printf("Değişimden sonra: x = %d, y = %d\n", x, y);

    return 0;
}
