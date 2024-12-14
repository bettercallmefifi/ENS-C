#include <stdio.h>

int main()
{
	int somme = 0;
	int nombre;

	printf("entrer les nombres pairs(saisissez -1 pour terminer)\n");

	do {
		scanf("%d",&nombre);
		if(nombre != -1 && nombre % 2 == 0)
        	        somme += nombre;
	}while(nombre != -1);

		printf("la somme est : %d\n",somme);
	return(0);
}
