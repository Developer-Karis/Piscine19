#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *new;
    int i;
    int len;

    i = 0;
    len = 0;
    while (src[len] != '\0')
        len++;
    new = (char *)malloc(sizeof(*new) * (len + 1));
    while (i < len)
    {
        new[i] = src[i];
        i++;
    }
    new[i] = '\0';
    return (new);
}