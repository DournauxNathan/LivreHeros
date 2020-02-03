#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct 	Chapitre {
	char description[150];
	int gainOr;
	int gaintPv;
	int id[3];
};
typedef struct Chapitre chap;


int main()
{
	int destination; 
	int numChapitre;
	int vie = 100;
	int or = 0;


	chap chapitre1 = {"Le village des paysans.\nIls sont tres accueillants et vous proposer de vous reposer.",10,20,{0,1,2}};
	chap chapitre2 = {"La grotte des gobelins.\nVous travers un amat de tresors ! Cependant ils sont nombreux et vous attaque.",50,-10,{0,1,2}};
	chap chapitre3 = {"La tour de la princess.\nVous rencontrer un belle princesse.\nOh non c'est une sorcière\n Elle vous vole de l'argent et vous jette par la fenetre\n",10,20,{0,1,2}};
	chap chapitre4 = {"L'antre du demon.\nVous voila dans l'antre bete.\n Vous sentez une profond respiration dans votre coup\n Soudain",10,20,{0,1,2}};

	chap livre[10];

	void deplacement(chap * leChapitre)
	{
	printf("%s\n\n", (*leChapitre).description);
	printf("Vous gagnez (ou perdez) %d d'ors.\n", (*leChapitre).gainOr);
	printf("Vous gagner (ou perdez) %d points de vie.\n\n", (*leChapitre).gaintPv);
	or += (*leChapitre).gainOr;
	vie += (*leChapitre).gaintPv;
	}

	/*Fonction de déplacement de chapitre en chapitre*/
	/*void changeChapitre()
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
	printf("Voyager a travers les chapitres !\n");

	while (vie > 0)
	{
		printf("____________________________\n\n");
		printf("Vie: %d | Or: %d\n\n", vie,or);

		printf("Chapitre(1) Chapitre(2) \n\n");
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
		}
	}

	if(vie <=0)
	{
		printf("Vous etes mort... C'est la fin de l'aventure\n");
	}

	

	return 0;
}

