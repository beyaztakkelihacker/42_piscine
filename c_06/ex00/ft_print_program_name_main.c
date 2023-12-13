#include <unistd.h>

// Tek bir karakteri ekrana yazdıran fonksiyon
void ft_putchar(char c) {
    write(1, &c, 1);
}

// Program adını ekrana yazdıran fonksiyon
void print_program_name(char *program_name) {
    int i = 0;

    // Null karakterine kadar (string sonu) program adını yazdır
    while (program_name[i] != '\0') {
        ft_putchar(program_name[i]);
        i++;
    }

    ft_putchar('\n'); // Alt satıra geç
}

int main(int argc, char *argv[]) {
    if (argc > 0) {
        print_program_name(argv[0]);
    }

    return 0; // Program başarıyla sona erdi
}