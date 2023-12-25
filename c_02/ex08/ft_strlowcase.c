char *ft_strlowcase(char *str) 
{
    int i = 0;

    while (str[i])
    {
        if (isupper(str[i])) 
        {
            str[i] = tolower(str[i]);
        }
        i++;
    }

    return str;
}
