#include <stdio.h>


int main(void)
{
	printf("                   <<--MENU-->>\n\n\n");
	system("color df"); 
	FILE *fp;
	int i=0, id, identifiant;
	char choix, nom[100], prenom[100], mail[100], num[100];
	
	printf("bonjour!\n");
	
	 fp = fopen("monrepertoire.txt", "a+");

	  printf("Saisir a   ->    visualiser le repertoire\n\n");
 	  printf("Saisir b   ->    ajouter un utilisateur au repertoire\n\n");
 	  printf("Saisir c   ->    rechercher une personne grace a son identifiant\n\n");
 	  printf("Saisir d   ->    supprimer le contenu du repertoire\n\n");
 	  printf("Saisir e   ->    exit\n\n");
  	  scanf("%c", &choix);
 	  getchar();
    
    if(choix !='a', 'b', 'c', 'd', 'e')
		 	{
  		printf("ERREUR VEUILLEZ CHOISIR UNE LETTRE : a, b, c, d ou e\n\n");
		
  	  	scanf("%c", &choix);
 	 	getchar();
	 	
		 	i++;
             }
	
		 
	 if (choix == 'a')
  	{for (i=0;i<5;i=i+1)
	{
	
  	
  		fscanf(fp, "%d  %s  %s  %s  %s", &id, &nom, &prenom, &mail, &num); 
  		printf("%d  %s  %s  %s  %s\n", id, nom, prenom, mail, num);
  	}
  	
  	}
  		
  	 if (choix == 'b')  
  {	
	printf("id: ");
		scanf("%d", &id);
		printf("nom: ");
		scanf("%s", &nom);
		printf("prenom: ");
		scanf("%s", &prenom);
		printf("@: ");
		scanf("%s", &mail);
		printf("numero: ");
		scanf("%s", &num);
		fprintf(fp, "\n%d", id);
		fprintf(fp," ");
		fprintf(fp, "%s", nom);
		fprintf(fp," ");
		fprintf(fp, "%s", prenom);
		fprintf(fp," ");
		fprintf(fp, "%s", mail);
		fprintf(fp," ");
		fprintf(fp, "%s", num);
}


	if (choix == 'c')
	{
		printf("Saisir un identifiant: \n");
	scanf("%d", &identifiant);
	
		
	for(i=0; i<5; i++)
	{
		fscanf(fp, "%d", &id);
		fscanf(fp, "%s", &nom);
		fscanf(fp, "%s", &prenom);
		fscanf(fp, "%s", &mail);
		fscanf(fp, "%s", &num);
		
		if(identifiant == id)
		{
			printf("%d %s %s %s %s", id, nom, prenom, mail, num);
		}
		
	}
}


	if (choix == 'd')
{
	 FILE *fp;
    fp = fopen("supprimerlefichiertest.txt", "w+");
        fclose(fp);
}

	if( choix == 'e')
{
	printf("Au revoir !");
}



 	fclose(fp);
 	return 0;
}
 
 
 
 
 

