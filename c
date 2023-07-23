#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// guess the number game 
int main(void) {
  printf("#Hello World\n\n #welcome to the game \n\n #design by pratham srivastav\n\n");
  printf("******guess the number game****** \n\n");
  int num , guess, nguesses =1;
  srand(time(0));
    num = rand() %20 +1;
  //printf( "%d\n", num);
  do{
    printf("guess the number between 1 - 20 =");
    scanf("%d", & guess);
    if(guess > num){
      printf(" lower number please !\n");
      
    }
    else if( guess < num){
      printf(" higher number please! \n");
      
    }
    else{
      printf(" you guess in %d attempt\n", nguesses );
      
    }nguesses++;
  }while(guess != num);
  return 0;
}
