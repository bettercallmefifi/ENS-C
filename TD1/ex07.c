#include <stdio.h>

int main()
{
	int N;
	float fact = 1;
	int i = 1;

	printf("enter le nombre entier :");
	scanf("%d",&N);

	if(N < 0)
		printf("n'exist pas");
	else
	{
		for(i;i <= N;i++)
			fact = fact * i;
		printf("la factorielle est : %.2f\n",fact);
	}
	return (0);
}
