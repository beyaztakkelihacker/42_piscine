int ft_strncmp(const char *s1, const char *s2, unsigned int n) {
    unsigned int i = 0; // i'yi burada tanımla
    for (; i < n && s1[i] && s1[i] == s2[i]; i++); // for döngüsü içinde ifadeyi düzelt
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}