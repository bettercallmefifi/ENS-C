#include <stdio.h>

double	FACT(int n)
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
	
int main()
{
	int N;
	printf("entrer le nombre:\n");
	scanf("%d",&N);

	double fact = FACT(N);
	if(fact != -1)
		printf("la factorielle de %d est :%f\n",N,fact);
	return(0);
}

