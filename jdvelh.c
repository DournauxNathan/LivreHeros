#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	int destination; 

	printf("Choisir la destination \n");
	printf("_____________________\n\n");
	printf("Auberge [1}  Foret [2]\n\n");
	printf("-- --\n");
	printf("Votre choix: "); scanf("%d", &destination); printf("");
	printf("-- --\n\n");

	switch (destination)
	{
		case 1 :
			printf("Vous avez atteind l'auberge\n");
		break;

		case 2 :
			printf("Vous avez atteind la foret\n");
		break;
	}

	return 0;
}