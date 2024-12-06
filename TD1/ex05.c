#include <unistd.h>
#include <stdio.h>

char ft_strcpy(char *str , char *cpy)
{
    int i = 0;
    while(str[i] != '\0')
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return (*cpy);
}

int main()
{
    char src[] = "ferdaous";
    char dest[50]; // Make sure the destination buffer is large enough

    ft_strcpy(dest, src);
    printf("Destination: %s\n", dest);
    return(0);

}