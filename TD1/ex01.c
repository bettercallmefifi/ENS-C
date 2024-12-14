#include <stdio.h>

int main()
{
    int n = 10;
    int S = 0;
    int i = 0;
    
    while (i < n)
    {
       S += i ;
       i++ ;
    }
    printf("la somme des 10 premiers entiers est %d \n",S);
    return(0);    
}
