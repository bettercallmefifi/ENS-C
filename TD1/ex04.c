#include <stdio.h>
#include <stdlib.h>


int ft_strlen(char *str)
{
    int len = 0;
    while(str[len]!= '\0')
    {
        len++;
    }
    return(len);
}
int main()
{
    char str[]="1337 coding schoolgcc";
    int l = ft_strlen(str);
    printf("la valeur de L est %d",l);
    return(0);
}