#include <stdio.h>

// Fibonacci dizisinin n. elemanını hesaplayan özyinelemeli fonksiyon
int ft_fibonacci(int index)
{
    // Eğer index negatifse, -1 döndür
    if (index < 0)
        return -1;

    // İlk iki eleman için temel durumları kontrol et
    if (index < 2)
        return index;

    // Recursive durum: Fibonacci dizisi tanımını kullanarak
    return ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
}

int main(void)
{
    // Örnek kullanım
    int n = 7;
    int result = ft_fibonacci(n);

    // Sonucu ekrana yazdır
    if (result != -1)
    {
        printf("Fibonacci dizisinin %d. elemani: %d\n", n, result);
    }
    else
    {
        printf("Geçersiz indeks. Lütfen negatif olmayan bir tamsayı girin.\n");
    }

    return 0;
}