#include <stdio.h>

int main() {
    int secretNumber = 5;
    int guess;
    int guessLimit = 3;
    int guessCount = 0;
    int outOfGuesses = 0;

    while(secretNumber != guess && outOfGuesses == 0) {
        if(guessCount < guessLimit) {
            printf("(Guess remaining = %d) Enter your guess : ", guessLimit-guessCount);
            scanf("%d", &guess);
            guessCount++;
        }
        else
            outOfGuesses = 1;
    }

    if(outOfGuesses == 1)
        printf("\nOut of guesses. You lose.\nThe secret number is = %d\n", secretNumber);
    else
        printf("\nCongratulations! You win.\n");

    return 0;
}
