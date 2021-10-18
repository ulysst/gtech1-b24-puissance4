#include <stdio.h>
int main(void) {
  int x,y;

for (x=0; x<7; x++)
{
    printf (" +");
    for (y=0; y<7; y++)
      printf("---+");
    printf ("\n%d", x+1);
    printf (" |");
    for (y=0; y<7; y++)
      printf(" |");
    printf ("\n");
}
printf (" +");
for (y=0; y<7; y++)
  for (y=0; y<7; y++)
    printf("---+");
printf ("\n");
}
