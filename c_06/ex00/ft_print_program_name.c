#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void print_program_name(char *program_name) {
    int i = 0;

    while (program_name[i] != '\0') {
        ft_putchar(program_name[i]);
        i++;
    }

    ft_putchar('\n');
}