int ft_str_is_lowercase(char *str) 
{
    while (*str) 
    {
        if (!islower(*str))
        {
            return 0;
        }
        str++;
    }
    return 1;
}
