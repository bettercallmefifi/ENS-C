#include <stdio.h>

int main()
{
	int n;

	printf("votre choix:");
	scanf("%d",&n);

	switch(n)
	{
		case 1:
		printf("Royal Chesse");
		break;
		case 2:
		printf("Mc Deluxe");
		break;
		case 3:
		printf("Mc Bacon");
		break;
		case 4:
		printf("Big Mac");
		break;
		default:
		printf("je n'ai aucune Choix!");
		break;
	}
}