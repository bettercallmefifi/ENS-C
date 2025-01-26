#include <stdio.h>

int main()
{
	int n;
	int f = 1;
	int i = 1;

	printf("entrer le nombre entier:\n");
	scanf("%d",&n);

	while(i <= n)
	{
		f = f * i;
		i++;
	}
	printf("la factorielle de la nombre est:%d\n",f);
	return(0);
}
