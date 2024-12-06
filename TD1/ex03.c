#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int tmp;

    printf("entrez la valeur de a:");
    scanf("%d",&a);
    printf("entrez la valeur de b:");
    scanf("%d",&b);
     printf("entrez la valeur de c:");
    scanf("%d",&c);
    printf("entrez la valeur de d:");
    scanf("%d",&d);
    tmp = a;
    a = b;
    b = c;
    c = d;
    d = tmp;

    printf("la valeur de a est %d \n",a);
    printf("la valeur de b est %d \n",b);
    printf("la valeur de c est %d \n",c);
    printf("la valeur de d est %d \n",d);

    return(0);
}
