#include <stdio.h>
#include <stdlib.h>

int main(){
  srand((unsigned int)time(NULL));
  int i,total,die[2];
  char name[8];

  printf("What your name\n");
  scanf("%s",name);
  printf("Hello, %s\n",name);

  
  printf("Rolling the dice...\n");
  for(i=0;i<2;i++){
    die[i]= rand() % 6 + 1;
    printf("Die %d: %d\n",i+1,die[i]);
    total+=die[i];
  }
  printf("Total value:%2d\n",total);
  
  if(total>7)printf("You won!");
  else printf("You lose");
}
