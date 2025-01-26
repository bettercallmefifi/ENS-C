#include <stdio.h>

int main()
{
	float TTC ,TVA,HT;

	printf("entrer les valeurs de HT et TVA:\n");
	scanf("%f %f",&HT,&TVA);

	TTC = HT * (1 + TVA/100);

	printf("le prix TTC est: %.2f\n",TTC);
	return(0);
}

