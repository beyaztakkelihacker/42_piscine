#include <stdio.h>

int ft_atoi(char *str) {
    int i = 0;
    int sign = 1;
    int result = 0;

    while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
        i++;

    while (str[i] == '+' || str[i] == '-') {
        sign = (str[i] == '-') ? sign * -1 : sign;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = (str[i] - '0') + (result * 10);
        i++;
    }

    return result * sign;
}

int main(void) {
    char *s = "   ---~+--+01234506789ab567";
    printf("%d\n", ft_atoi(s));
    return 0;
}