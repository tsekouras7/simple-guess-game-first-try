#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(){
	
	srand(time(0)); 

	int maxNum = 9;
	printf("Welcome to the guess the number game!\n");

	int tryAgain = 1;
	int secretOld = 0;
	int secret = 0;
	while ( tryAgain == 1 ) {
		printf("\n\n  Guess the secret number from 1 to %d\n",maxNum);
		secretOld = secret;
		
		//making sure the secret number is not the same as before//
		while ( secret == secretOld ) {
			secret = ( rand() % ( maxNum - 1 ) ) + 1;
		}
		
		int guess = -1; //initializing the players guess in a neutral number//

		int counterOfTries=0;

		while ( guess != secret ) {
			printf("\nYour try:");
			scanf("%d",&guess);
			counterOfTries++;
			if ( guess > secret ) {
				printf("\n Too High\n");
			} else if ( guess < secret ) {
				printf("\n Too low\n");
			}
		}
		printf(" Congratulations, you won!\nTries %d\n",counterOfTries);
		printf("\n  To play again input 1, to exit input 0:");
		scanf("%d",&tryAgain);
		
	}
	printf("\n   Thank you for playing! see you soon!");
	return 0;
}
