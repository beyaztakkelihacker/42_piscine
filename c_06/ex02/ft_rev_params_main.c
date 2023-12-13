#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int main(int argc, char *argv[]) {
    int i = argc - 1; // argc değişkeninin değerinin 1 eksiğini i değerine eşitliyoruz.

    while (i > 0) {
        int j = 0; // j değişkeninin değerini 0'a eşitliyoruz.

        // argv dizisinin i. elemanının j. indeksindeki karakterleri ekrana yazdır
        while (argv[i][j] != '\0') {
            ft_putchar(argv[i][j]);
            j++;
        }

        ft_putchar('\n'); // Her bir argümanın sonunda alt satıra geçiyoruz
        i--; // Bir önceki argümana geçiyoruz
    }

    return 0;
}