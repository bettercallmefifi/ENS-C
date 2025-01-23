#include <stdio.h>
#include <math.h>

int resoudre2(int a, int b, int c, float *X1, float *X2)
{
    float delta;

    if(a == 0 && b == 0 && c == 0)
        return(-1);
    else if(a == 0 && b == 0 && c != 0)
        return(0);
    else if(a == 0 && b != 0 && c != 0)
        {
            *X1 = (float)-c/b;
            return(1);
        }
    else if(a != 0 && b != 0 & c != 0)
    {
        delta = pow(b,2)- 4 * a * c;
        if(delta < 0)
        {
            return (0);
        }
        else if(delta == 0)
        {
            *X1 = (float)-b/ (2 * a);
            return(1);
        }
        else if(delta > 0)
        {
            *X1 = (float) (-b - sqrt(delta))/(2 * a);
            *X2 = (float) (-b + sqrt(delta))/(2 * a);
            return(2);
        }
    }
}

int main()
{
    int q,w,e;
    float x1,x2;

    printf("entrer les valeurs de a ,b et c:\n");
    scanf("%d %d %d",&q,&w,&e);

    int result = resoudre2(q,w,e,&x1,&x2);

    if(result == -1)
        printf("%d:tout x est un solution\n",result);
    else if(result == 0)
        printf("%d:Pas de solution\n",result);
    else if(result == 1)
        printf("%d:une seule solution x1 = %.2f\n",result,x1);
    else if(result == 2)
    {
        printf("%d:Deux solution : x1 = %.2f , x2 =%.2f\n",result,x1,x2);
    }
    return(0);
}