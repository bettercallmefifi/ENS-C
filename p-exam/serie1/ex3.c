#include <stdio.h>

int main()
{
	int a,b,c,d,temp;

	printf("entrer les valeurs de 4 variables:\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	temp = a;
	a = b;
	b= c;
	c= d;
	d = temp;

	printf("les valeurs actuelles de 4 valeurs sont: %d ,%d,%d,%d\n",a,b,c,d);
	return(0);
}

