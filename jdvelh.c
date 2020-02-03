#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct 	Chapitre {
	char description[150];
	int gainOr;
	int gaintPv;
	int id[3];s
};
typedef struct Chapitre chap;


int main()
{
	int destination; 
	int numChapitre;
	int vie = 100;
	int or = 10;


	chap chapitre1 = {"Le village des paysans.\n Ils sont tres accueillants et vous proposer de vous reposer.",10,20,{0,1,2}};
	chap chapitre2 = {"La grotte des gobelins.\n Vous travers un amat de tresors ! Cependant ils sont nombreux et vous attaque.",50,-10,{0,1,2}};
	chap chapitre3 = {"La tour de la princess.\n Vous vous trouvez en bas d'une grande tour",10,20,{0,1,2}};

	chap livre[10];

	void deplacement(chap * leChapitre)
	{
	printf("%s\n\n", (*leChapitre).description);
	printf("Vous gagnez (ou perdez) %d d'ors.\n", (*leChapitre).gainOr);
	printf("Vous gagner (ou perdez) %d points de vie.\n", (*leChapitre).gaintPv);
	or += (*leChapitre).gainOr;
	vie += (*leChapitre).gaintPv;
	}

	/*Fonction de déplacement de chapitre en chapitre*/
	/*void deplacement()
	{
		printf("Pour allez a un chapitre, taper son numéro\n");
		scanf("%d", &); //Saisir le numéro du chapitre

		switch (i)
		{
			case 1 : 
					printf("%s\n", livre[1].description);
			break;
		}
		
	}*/

	printf("	   Menu\n");
	printf("____________________________\n\n");
	printf("Voyager a travers les chapitres !\n\n");

	printf("Vie: %d | Or: %d\n\n", vie,or);

	printf("Chapitre (1) Chapitre (2) Chapitre (3)\n\n");
	printf("-- --\n");
	printf("Votre choix: "); scanf("%d", &destination); printf("");
	printf("-- --\n\n");

	switch (destination)
	{
		case 1 :
			deplacement(&chapitre1);
		break;

		case 2 :
			deplacement(&chapitre2);
			
		break;

		case 3 :
			deplacement(&chapitre3);
		break;
	}

	return 0;
}

