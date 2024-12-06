#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}
char ft_rev_str(char *str)
{
    int i = ft_strlen(str); 
    while (i >= 0)
    {
        write(1,&str[i],1);
        i--;
    }
    return(*str);
}
int main()
{
    char str[]="ferdaous el idrissi";
    int h = ft_strlen(str);
    printf("%d\n",h);
    char f = ft_rev_str(str);
    printf("%s\n",f);
    int c = ft_strlen(f);
    printf("%d",c);
    return(0);
}