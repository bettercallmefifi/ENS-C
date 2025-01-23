#include <stdio.h>

void	ft_mult(int a)
{
	if(a % 5 == 0 || a % 7 == 0)
		printf("%d est un multiple de 5 et 7\n",a);
	else
		printf("%d n'est pas multiple de 5 et 7\n",a);
}

int main()
{
	int N;

	printf("enter le nombre:");
	scanf("%d",&N);
	ft_mult(N);
	return(0);
}

