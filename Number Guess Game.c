#include <stdio.h>   // gives printf() and scanf()
#include <stdlib.h>  // gives srand and rand
#include <time.h>    // gives time
int main() {
    int computer, guess, attempts = 0;
        srand(time(0)); 

    // Here, I have given function to generate a random number from 1 to 100
    computer = (rand() % 100) + 1;

    printf("NUMBER GUESSING GAME\n");
    printf("\nI'm thinking of a number between 1 and 100\n");

    // Game loop
    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts ++;

        if (guess > computer) {
       printf("Try a lower number!\n");
        } else if (guess < computer) {
            printf("Try a higher number!\n");
        } else {
        printf("Well Played! You did it in %d attempts!\n", attempts);
        }
    } while (guess = computer);

    return 0;
}