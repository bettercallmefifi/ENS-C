#include <stdio.h>

int main()
{
	int n;
	int s = 0;
	int i = 0;
	float M;

	printf("saisis les valeurs (-1 pour s'arreter):\n");
	do{
		scanf("%d",&n);

		if(n != -1)
		{
			s=s+n;
			i++;
		}
	}while(n != -1);

	if(i > 0)
	{
		M =(float)s / i;
		printf("la moyenne est :%f\n",M);
	}else
		printf("aucun valeur saisis\n");
	return(0);
}

