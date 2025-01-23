#include <stdio.h>


double FACT(int n)
{
		int i;
        double F = 1;
        if(n < 0){
                printf("impossible\n");
                return(-1);
        }
        else if(n==0)
                return(1);
        else
        {
                for(i = 1; i <= n;i++)
                {
                        F = F * i;
                }
                return(F);
        }
}
double	COMBIN(int n, int p)
{
	if(p > n || p < 0)
	{
		printf("impossible");
		return(-1);
	}
	double result;
	int h = n-p;
	result = FACT(n)/(FACT(p) * FACT(h));
	return(result);
}

int main()
{
	int n;
	int p;

	printf("entrer les valeur de n et P\n");
	scanf("%d %d",&n,&p);

	double combin = COMBIN(n,p);
	if(combin != -1)
		printf("la combinaison de %d et %d est : %f\n",n,p,combin);
	return(0);
}
