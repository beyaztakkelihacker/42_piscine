#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b) 
{
    int temp = *a; // a'nın değerini geçici bir değişkene kopyala
    *a = temp / *b; // böl ve sonucu a'nın işaret ettiği belleğe kaydet
    *b = temp % *b; // kalanı b'nin işaret ettiği belleğe kaydet
}

int main() 
{
    int x = 17;
    int y = 5;

    ft_ultimate_div_mod(&x, &y);

    printf("Bölme sonucu: %d, Kalan: %d\n", x, y);
}