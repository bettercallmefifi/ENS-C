#include <stdio.h>

int main()
{
	int note;
	int somme = 0;
	float moyenne;
	int i = 0;

	printf("entrer les notes (-1 pour s'arreter)\n");

	do
	{
		scanf("%d",&note);
		if(note != -1)
		{
			somme += note;
			i++;
		}
	}while(note != -1);

	if(i > 0)
	{
		moyenne = (float)somme/ i;
		printf(" la moyenne est : %2.f\n",moyenne);
	}
	else
		printf("Aucune note saisie.\n");
	return(0);
}
