void ft_putnbr(int nb) {
    nb < 0 && putchar('-') && (nb = -nb);

    nb >= 10 && ft_putnbr(nb / 10);

    putchar(nb % 10 + '0');
}