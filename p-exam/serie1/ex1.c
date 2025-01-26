#include <stdio.h>

int main()
{
	int n = 10;
	int s=0;
	int i = 0;

	while(i <= n)
	{
		s=s+i;
		i++;
	}
	printf("la somme des 10 premiers entiers naturels est:%d\n",s);
	return(0);
}

