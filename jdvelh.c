#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct 	Chapitre {
	char description[500];
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

	int chapitreActuelle;


	chap chapitre1 = {"Le village des paysans.\n\nIls sont tres accueillants et vous proposer de vous reposer.\n\nMais il est temps de reprendre la route ! \n\n Chapitre 2 - La grotte des gobelins\nChapitre 3 - La tour de la princesse \n Chapitre 4 - L'antre du demon",10,20,{0,1,2}};
	chap chapitre2 = {"La grotte des gobelins.\n\nVous trouvez un amat de tresors ! Cependant ils sont nombreux et vous attaque.",50,-10,{0,1,2}};
	chap chapitre3 = {"La tour de la princess.\n\nVous rencontrer un belle princesse.\nOh non c'est une sorcière\nElle vous vole de l'argent et vous jette par la fenetre\n",-20,-5,{0,1,2}};
	chap chapitre4 = {"L'antre du demon.\n\nVous voila dans l'antre bete.\n Vous sentez une profond respiration dans votre coup\n Soudain",-30,-30,{0,1,2}};

	chap livre[10];

	void deplacement(chap * leChapitre)
	{
		printf("%s\n\n", (*leChapitre).description);
		
		or += (*leChapitre).gainOr;
		printf("Vous gagnez (ou perdez) %d d'ors.\n", (*leChapitre).gainOr);

		vie += (*leChapitre).gaintPv;
		printf("Vous gagner (ou perdez) %d points de vie.\n\n", (*leChapitre).gaintPv);
		
		if(vie >= 100)
		{
			printf("Votre vie est au maximun\n\n");
		
		}

	}



	printf("	   Debut\n");
	printf("____________________________\n\n");
	printf("Voyager a travers les chapitres !\n");

	while (vie > 0)
	{

		printf("____________________________\n\n");
		printf("Vie: %d | Or: %d\n\n", vie,or);

		printf("-- --\n");
		printf("Voyage vers le chapitre: "); scanf("%d", &destination); printf("");
		printf("-- --\n\n");

		switch (destination)
		{
			case 1 :
				deplacement(&chapitre1);
				chapitreActuelle = 1;
			break;

			case 2 :
				deplacement(&chapitre2);
				chapitreActuelle = 2;
			break;

			case 3 :
				deplacement(&chapitre3);
				chapitreActuelle = 3;
			break;

			case 4 :
				deplacement(&chapitre4);
				chapitreActuelle = 4;
			break;
		}
	}

	

	if (or <= 0)
	{
		printf("Vous n'avez plus d'or\n\n");
	}

	if(vie <=0)
	{
		printf("Vous etes mort... C'est la fin de l'aventure\n");
	}

	

	return 0;
}

