#include <unistd.h>

void ft_putstr(char *str) {
    int i = 0;
    while (str[i]) {
        if (write(1, &str[i], 1) == -1) {
            return;
        }
        i++;
    }

    write(1, "\n", 1);
}