#include <stdio.h>

int main()
{
	int i = 0;
	int n ;
	int s = 0;

	printf("saisez les nombres pairs(-1 pour s'arreter):\n");
	do{
		scanf("%d",&n);
		if(n !=- 1 && n % 2 == 0)
		{
			s = s + n;
		}
	}while(n!= -1);
	if( s > 0)
		printf(" la somme des nombres pairs est: %d\n",s);
	else
		printf("aucun nombre saisis\n");
	return(0);
}
