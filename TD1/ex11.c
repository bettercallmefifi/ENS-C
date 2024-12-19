#include <stdio.h>

int main()
{
	int Note;

	printf("enter la node que vous voulez sur 20!\n");
	scanf("%d",&Note);

	if(Note >= 16)
		printf("Mention : très bien\n");
	else if(Note >= 14)
		printf("Mention : Bien\n");
	else if(Note >= 12)
		printf("Mention : Assez bien\n");
	else if(Note >= 10)
		printf("Mention : Passable\n");
	else
		printf("Mention: Insuffisant\n");
	return(0);
}
