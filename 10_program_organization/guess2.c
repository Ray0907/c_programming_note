/* Asks user to guess a hidden number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* prototypes */
void initialize_number_generator(void);
int new_secret_number(void);
void read_guesses(int secret_number);

int main(void) {
	char command;
	int secret_number;

	printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
	initialize_number_generator();
	do {
		secret_number = new_secret_number();
		printf("A new number has been choosen.\n");
		read_guesses(secret_number);
		printf("Play again (Y/N) ");
		scanf(" %c", &command);
		printf("\n");
	} while (command == 'Y' || command == 'y');

	return 0;
}

/***************************************************************
 * initialize_number_generator: Initializes the random         *
 * 								number generator using         *
 * 								the time of day.               *
 * ************************************************************/
void initialize_number_generator(void) {
	srand((unsigned) time(NULL));
}

/***************************************************************
 * new_secret_number: Returns a randomly chosen number         *
 * 					  between 1 and MAX_NUMBER.                *
 * ************************************************************/

int new_secret_number() {
	return rand() % MAX_NUMBER +1;
}

/***************************************************************
 * read_guesses: Repeatedly reads user guesses and tells       *
 * 				 the user whether each guess is too low,       *
 * 				 too high, or correct. When the guess is       * 
 * 				 current, prints the total number of           *
 * 				 guesses and returns.                          *
 * ************************************************************/
void read_guesses(int secret_number) {
	int guess, num_guess = 0;
	
	for(;;) {
		num_guess++;
		printf("ENter guess: ");
		scanf("%d", &guess);
		if(guess == secret_number) {
			printf("You won in %d guesses!\n\n", num_guess);
			return;
		} else if (guess < secret_number) 
			printf("Too low; try again.\n");
		else 
			printf("Too high; try again.\n");
	}
}