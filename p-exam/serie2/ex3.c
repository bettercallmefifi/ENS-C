#include <stdio.h>

void	ft_croi_decroi(int n)
{
	int i = n;
	while( i >= 1)
	{
		printf("%d ",i);
		i--;
	}
	i = 1;
	while(i <= n)
	{
		printf("%d ",i);
		i++;
	}
	printf("\n");
}

int main()
{
	int n;
	printf("entrer l'entier que vous voulez:\n");
	scanf("%d",&n);
	printf("l'affichage:\n");
	ft_croi_decroi(n);
	return(0);
}

