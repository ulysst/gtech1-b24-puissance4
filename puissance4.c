#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<unistd.h>
#define NBL 6
#define NBC 7
int player;
int rownum;
int colnum;
int count = 0;
int maxcol;
int maxrow;

char token[] = "ox";
char player_1[20];
char player_2[20];
char tab[NBL][NBC];                                                  //Défini les valeurs du tableau.

void flushstdin() {
  int c;
  while((c = getchar()) != '\n' && c != EOF);
    }

void tab_init(void) {                                                //Mise en forme du tableau.
  for(int y=0;y<NBL;y++)
    for(int x=0;x<NBC;x++)
      tab[y][x] = '.';
}

void print_tab(void) {                                               //Appel du tableau.
  printf("-------------\n");                                         //Haut du tableau.
  for(int y=0;y<NBL;y++) {
    for(int x=0;x<NBC;x++) {
      char case_tab = tab[y][x];
      printf("%c", case_tab);
      printf("%c", &tab);                                            //Afficher une variable en tant que caractère.
      printf(" ");
    }
    printf("\n");               
  }
  printf("-------------\n");                                         //Bas du tableau.
  printf("1 2 3 4 5 6 7\n");
}
void update_tab(int player_choose, int player) {                     //Met à jour le tableau.
  for(int y=NBL;y>=0;y--) {
    if (tab[y][player_choose] == '.') {
      tab[y][player_choose] = token[player];
      break;
    }
  }
}


void game(void) {                                                    //DÉBUT DE LA PARTIE.
  
  printf("Bonjour joueur 1, quel est votre nom ?: ");
  scanf("%s", player_1);
  printf("Bienvenu %s.\n", player_1);
  printf("Bonjour joueur 2, quel est votre nom ?: ");
  scanf("%s", player_2);
  printf("Bienvenu %s.\n", player_2);
  printf("La partie va bientôt commencer.\n", &player_1 , &player_2);
  
  tab_init();
  
  int player = 0;
  bool end = false;
  while(!end) {
    print_tab();
    int player_choose;
        
    
    printf("[%c] Où voulez placer votre jeton ?\n", token[player]);
    int error = scanf("%d", &player_choose);
    if(error > 0) {                                                   //Vérification de l'input (entre 1 et 7)
      if(player_choose < 1 || player_choose > 7) {
      	continue;
      }
 
      player_choose--;
      update_tab(player_choose, player);
      player = !player;

    }
    else {
      printf("Entre un nombre entier.\n");
      flushstdin();
    }
  }
}

void main(void){
  game();
}
