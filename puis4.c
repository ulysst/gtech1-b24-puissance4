#include <stdio.h>
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

int main(void) {		//Début de l'affichage du code.
  tab_init();
  print_tab();
}
