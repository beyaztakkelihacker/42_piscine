#include <unistd.h>

// Tek bir karakteri ekrana yazdıran fonksiyon
void ft_putchar(char c) {
    write(1, &c, 1);
}

int main(int argc, char *argv[]) {
    int j = 1;

    // Program adı olmadan komut satırı argümanlarını yazdır
    while (j < argc) {
        int i = 0;

        // Argümanın sonuna kadar karakterleri yazdır
        while (argv[j][i] != '\0') {
            ft_putchar(argv[j][i]);
            i++;
        }

        // Argümanın sonunda yeni bir satıra geç
        ft_putchar('\n');
        j++;
    }

    return 0;
}