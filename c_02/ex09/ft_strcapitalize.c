char *ft_strcapitalize(char *str) 
{
    int i = 0;
    int i1 = 1;

    while (str[i]) 
    {
        if (isalpha(str[i])) 
        {
            if (i1 == 1) 
            {
                str[i] = toupper(str[i]);
                i1 = 0;
            }
        } 
        else 
        {
            i1 = 1;
        }
        i++;
    }

    return str;
}
