#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#define NBL 6
#define NBC 7

char tab[NBL][NBC];		//Défini les valeurs du tableau.


void tab_init(void) {		//Mise en forme du tableau.
  for(int y=0;y<NBL;y++)
     for(int x=0;x<NBC;x++)
	tab[y][x] = '.';
}

void print_tab(void) {		//Appel du tableau.
  printf("-------------\n");	//Haut du tableau.
  for(int y=0;y<NBL;y++) {
    for(int x=0;x<NBC;x++) {
       char case_tab = tab[y][x];
	printf("%c", case_tab);	//Afficher une variable en tant que caractère.
	printf(" ");
    }
    printf("\n");		//Retour à la ligne.
  }
  printf("-------------\n");	//Bas du tableau.
  printf("1 2 3 4 5 6 7\n");
}
int player_move_init() {
  int player_move;
  int player;
  char case_tab[][];
  
char tokens[] = "ox";
 printf("Dans quelle collone voulez vous jouer ?");
 scanf("%s", player_move);
  int player_move_turn();
  if (player_move <= NBL, && >0) ;
 char case_tab[0][player_move] = 'x';
     printf("Vous avez joué dans la case", player_move);
     else printf("Rejouez"); player_moves_turn();
 
int player =! int player ;
 
  if player_move <= 6; && > 0;
 char case_tab[1][player_move] = 'o';
     printf("Vous avez joué dans la case", player_move);
     else printf("Rejouez"); player_moves();

}

int main(void) {		//Début de l'affichage du code.

  char player_1[20];            //Texte de bienvenu des joueurs
  char player_2[20];
  
  printf("Bonjour joueur 1, quel est votre nom ?: ");
  scanf("%s", &player_1);
  printf("Bienvenu %s.\n", &player_1);
  printf("Bonjour joueur 2, quel est votre nom ?: ");
  scanf("%s", &player_2);
  printf("Bienvenu %s.\n", &player_2);
  printf("La partie va bientôt commencer.\n", &player_1 , &player_2);
  printf("Où voulez placer votre jeton ?");
  

  
  tab_init();
  print_tab();
}

