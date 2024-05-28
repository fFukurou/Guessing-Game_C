#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    printf("*********************************\n");
    printf("Welcome to the guessing game\n");
    printf("*********************************\n");

    int seconds = time(0);
    srand(seconds);

    int rawNumber = rand();
    int secretNumber = rawNumber % 100;

    int guess;
    int tries = 1;

    int level;
    printf("What is the desired difficulty level?\n(1) Easy -- 20 Tries\n(2) Medium -- 10 Tries\n(3) Hard -- 6 Tries\n");
    scanf("%d", &level);


    int numberTries;
    switch (level) {
        case 1:
            numberTries = 20;
            break;

        case 2:
            numberTries = 10;
            break;

        default:
            numberTries = 5;
            break;
    }


    for (int i = 1; i <= numberTries; i++){
        printf("Chance %d \n", tries);
        printf("Take a guess.\n");
        scanf("%d", &guess);

        if (guess < 0) {
            printf("You can't pick a negative number. \n");
            continue;
        }

        int correctGuess = (guess == secretNumber);

        if (correctGuess){
            printf("You won! The secret number was %d.\nYou got it in %d tries.", secretNumber, tries);

            break;
        }


        else{
            printf("\nYou got it wrong.\n");

            tries++;

            if (secretNumber > guess) {
                printf("The secret number is greater than your guess.\n\n");

            }
            else if (secretNumber < guess) {
                printf("The secret number is lesser than your guess.\n\n");
            }

            }
    }
    if (tries == numberTries + 1) {
        printf("You ran out of tries...\n");

    }
    printf("\nThank you for playing.\n");

    return 0;
}















