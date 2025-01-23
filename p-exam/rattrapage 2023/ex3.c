#include <stdio.h>

int nombredesDiviseurs(int n)
{
	int i=1;
	int count=0;

	if(n > 0)
	{
		for(i = 1;i<= n;i++)
		{
			if(n%i == 0)
			{
				printf("le nombra %d est un diviseur de %d\n",i,n);
				count++;
			}
		}
	}
	return(count);
}
int main()
{
	int n = 45;

	int result = nombredesDiviseurs(n);
	printf("%d\n",result);
	return(0);
}

