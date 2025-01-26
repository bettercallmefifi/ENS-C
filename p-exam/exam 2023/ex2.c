#include <stdio.h>
#include <math.h>

int resoudre2(int a,int b,int c,float *X1, float *X2)
{
	float delta;

	if(a == 0 && b == 0 && c == 0)
		return(-1);
	else if(a == 0 && b == 0 && c != 0)
		return(0);
	else if(a == 0 && b!= 0 && c == 0)
	{
		*X1 = 0;
		return(1);
	}
	else if(a != 0 && b == 0 && c == 0)
	{
		*X1 = 0;
		return(1);
	}
	else if(a == 0 && b != 0 && c != 0)
	{
		*X1= (float)-c / b;
		return(0);
	}
	else if( a != 0 && b != 0 && c == 0)
	{
		*X1 = 0;
		*X2 = (float) -b / a;
		return(2);
	}
	else if(a != 0 && b == 0 && c != 0)
	{
		if((c > 0 && a < 0)||(c < 0 && a > 0))
		{
			*X1 = sqrt((float)-c/a);
			*X2 = - sqrt((float)-c/a);
			return(2);
		}
		else
			return(0);
	}
	else{
		delta = pow(b,2)- 4 * a * c;

		if(delta < 0)
			return (0);
		else if(delta == 0)
			{
				*X1= (float)(-b)/( 2 * a);
				return(1);
			}
		else if(delta > 0)
		{
			*X1 = (float)((-b - sqrt(delta))/ (2 * a));
			*X2 = (float)((-b + sqrt(delta)) / (2 * a));
			return (2);
		}
	}
}
int main() {
    int a, b, c;
    float x1, x2;

    printf("Entrez les coefficients a, b et c : ");
    scanf("%d %d %d", &a, &b, &c);

    int result = resoudre2(a, b, c, &x1, &x2);
    if (result == -1) {
        printf("tout x est une solution\n");
    } else if (result == 0) {
        printf("Pas de solution\n");
    } else if (result == 1) {
        printf("Une solution : x = %.2f\n", x1);
    } else if (result == 2) {
        printf("Deux solutions : x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    return 0;
}
