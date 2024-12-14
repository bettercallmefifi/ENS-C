#include <stdio.h>

int main()
{
	int N1,N2,N3,N4;
	float moyenne;
	int minimum;
	int somme;

	printf("entrer les 4 nombre :\n");
	scanf("%d %d %d %d",&N1,&N2,&N3,&N4);

	somme = N1 + N2 + N3 + N4;
	moyenne = (float)somme / 4;

	if(N1 < N2)
		minimum = N1;
	else if (N2 < N3)
		minimum = N2;
	else if (N3 < N4)
		minimum = N3;
	printf("la somme des 4 nombre est : %d\n",somme);
	printf("la moyenne est : %.2f\n",moyenne);
	printf("le minimum est : %d\n",minimum);
	return(0);
}

