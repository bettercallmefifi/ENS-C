#include <stdio.h>

void	ft_decroi(int n)
{
	if( n >= 1)
	{
		printf("%d ",n);
		ft_decroi(n - 1);
	}
}
void    ft_croi(int n, int i)
{
        if(i <= n)
        {
                printf("%d ",i);
                ft_croi(n,i + 1);
        }
}

void ft_totale(int n)
	{
		ft_decroi(n);
		ft_croi(n,1);
		printf("\n");
	}
int main()
{
	int n;
	printf("entrer l'entier que vous voulez:\n");
	scanf("%d",&n);

	printf("l'affichage\n");
	ft_totale(n);
	return(0);
}
