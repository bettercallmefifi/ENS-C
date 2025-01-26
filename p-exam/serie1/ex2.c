#include <stdio.h>

int main()
{
	int a,b,temp;

	printf("entrer les valeurs de a et b:\n");
	scanf("%d %d",&a,&b);

	temp = a;
	a = b;
	b = temp;

	printf("les valeurs actuelles de a et b sont: %d ,%d\n",a,b);
	return(0);
}
