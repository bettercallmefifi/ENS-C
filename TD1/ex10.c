#include <stdio.h>

int pgcd(int a, int b)
{
	if(b == 0)
		return a;
	else
		return(pgcd(b,a%b));
}

int main()
{
	int num1,num2;

	printf("entrer les nombres :\n");
	scanf("%d %d",&num1,&num2);

	printf("lePGCD de %d et %d est : %d\n",num1,num2,pgcd(num1,num2));
	return(0);
}

