#include <stdio.h>

int main()
{
	int n;
	int i;

	do{
		printf("enter le nombre plus grand de 1:\n");
		scanf("%d",&n);
	}while(n < 1);

	for(i=1;i <= n; i++)
	{
		if(n%i == 0)
			printf("%d est un diviseur de nombre %d\n",i,n);
	}
	return(0);
}	

