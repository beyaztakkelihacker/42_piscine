#include <stdio.h>

// İki tamsayıyı değiştiren fonksiyon
void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    // ft_swap fonksiyonunun örnek kullanımı
    int x = 5;
    int y = 10;

    printf("Değiştirme öncesi: x = %d, y = %d\n", x, y);

    // ft_swap fonksiyonunu çağırma
    ft_swap(&x, &y);

    printf("Değiştirme sonrası: x = %d, y = %d\n", x, y);

    return 0;
}