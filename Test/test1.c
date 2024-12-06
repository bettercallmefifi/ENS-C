#include <stdio.h>

int main()
{
	int n;
	printf("=== Menu: ===\n");

	printf("1.Royal Cheese\n2.Mc Delux\n3.Mc Bacon\n4.Big Mac\n");

	printf("votre choix:");

	scanf("%d",&n);

	switch(n)
	{
		case 1:
		printf("Royal Chesse\n");
		break;
		case 2:
		printf("Mc Deluxe\n");
		break;
		case 3:
		printf("Mc Bacon\n");
		break;
		case 4:
		printf("Big Mac\n");
		break;
		default:
		printf("aucune Choix!\n");
		break;
	}
	return (0);
}