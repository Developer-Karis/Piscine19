#include <stdio.h>

int     ft_atoi(const char *str)
{
    int i;
    int result;
    int count;

    i = 0; 
    result = 0;
    count = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            count++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    if (count % 2 != 0)
        result *= -1;
    return (result);
}

int     main(void)
{
    char test[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
    printf("%d\n", ft_atoi(test));
    return (0);
}