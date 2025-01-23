#include <stdio.h>

int main()
{
	int *p1,*p2,*addition;
	int n2,n1,somme;
	

        p1=&n1;
	p2=&n2;
	addition = &somme;
	printf("entrer les valeurs de n1 et n2:\n");
	scanf("%d %d",p1,p2);

	*addition = *p1 + *p2;
	
	printf("la somme de les deux valeurs est: %d",*addition);
	return(0);
}
