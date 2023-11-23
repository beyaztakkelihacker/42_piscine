#include <stdio.h>

void ft_sort_int_tab(int *tab, int size) {
    int i, swap;

    while (size > 0) {
        for (i = 0; i < size - 1; i++) {
            if (tab[i] > tab[i + 1]) {
                swap = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = swap;
            }
        }
        size--;
    }
}

int main() {
    int tab[6] = {7, 6, 3, 4, 2, 5};
    int size = 6;

    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}