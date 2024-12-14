#include <stdio.h>

int main()
{
    int a;
    int b;
    int tmp;

    printf("entrez la valeur de a:");
    scanf("%d",&a);
    printf("entrez la valeur de b:");
    scanf("%d",&b);
    tmp = a;
    a = b;
    b = tmp;
    printf("la valeur de a est %d \n et la valeur de b est %d",a,b);
    return(0);
}
