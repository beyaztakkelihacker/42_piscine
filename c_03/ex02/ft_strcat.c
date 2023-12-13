#include <stdio.h>

char *ft_strcat(char *dest, const char *src) {
    int x = 0;
    while (dest[x]) {
        x++;
    }

    int y = 0;
    while (src[y]) {
        dest[x + y] = src[y];
        y++;
    }

    dest[x + y] = '\0';

    return dest;
}