#include <stdio.h>

int main()
{
	int nombre;
	float pourcentage;
	float result;

	printf("entrer le nombre et le pourcentage:\n");
	scanf("%d %f",&nombre,&pourcentage);

	result = nombre * (pourcentage/100);

	printf("le pourcentage du nombre est : %.2f\n",result);
	return(0);
}
