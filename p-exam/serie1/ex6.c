#include <stdio.h>

int main()
{
	int n1,n2,n3,n4;
	int min;
	float moyenne;
	int somme;

	printf("entrer les 4 nombres :\n");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	somme = n1 + n2 + n3 + n4;
	moyenne = (float) somme / 4;

	if( n1 < n2)
		min = n1;
	else if( n2 < n3)
		min = n2;
	else if(n3 < n4)
		min = n3;
	printf("la somme est: %d\n",somme);
	printf("la moyenne est : %.2f\n",moyenne);
	printf("le minimum est :%d\n",min);
	return(0);
}

