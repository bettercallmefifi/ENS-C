#include <stdio.h>

int main()
{
	int nombre ;
	float P;
	float result;

	printf("entrer le nombre et le pourcentage: ");
	scanf("%d %f",&nombre,&P);

	result = nombre *(P / 100);
	
	printf("le result est : %.2f",result);
	return(0);
}

