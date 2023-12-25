int ft_str_is_alpha(char *str) {
    while (*str) {
        if (!isalpha(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}