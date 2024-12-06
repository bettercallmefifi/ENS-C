#include <stdio.h>

void    ft_number(int n)
{
     if (n < 10){
        while (n < 10)
        {
            printf("%d\n",n);
            n++;
        }
     }
     else
        printf("la valeur plus grand");
    
}
int main()
{
    ft_number(9);
    return(0);
}