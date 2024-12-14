#include <stdio.h>

int main() {
   int somme = 0;
   int i = 0;
   float moyenne;
   int nombre;


   printf("entrer les nombres (-1 pour s'arreter)\n");

   do{
	   scanf("%d",&nombre);
	   if(nombre != -1)
	   {
		   somme += nombre;
		   i++;
	   }
   }while(nombre != -1);

   if(i > 0)
   {
	   moyenne = (float)somme / i;
	   printf("la moyenne est : %.2f\n",moyenne);
   }else{
	   printf("Aucun nombre n'a été saisi.\n");
   }
   return(0);
}

