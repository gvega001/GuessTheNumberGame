#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber = 0;
    int guess =0;
    int maximumNumberOfGuesses = 5;
    time_t t;

    srand((unsigned) time(&t));

    randomNumber = rand() %21;

    printf("\nThis is a guessing game");
    printf("\nI have chosen a number between 0 and 20, which you must guess.\n");

    for(maximumNumberOfGuesses=5;maximumNumberOfGuesses>0;--maximumNumberOfGuesses)
        {
            printf("\nYou have %d tr% left.", maximumNumberOfGuesses, maximumNumberOfGuesses==1? "y": "ies");
            printf("\nEnter a guess");
            scanf("%d, &guess");
            if (guess == randomNumber)
                {
                printf("\nCongratulations. You guessed it!\n");
                break;
                }
                else if (guess<0||guess>20)
                    {
                        printf("I said the number is between 0 and 20.\n");
                    }
                else if(randomNumber > guess)
                    printf("Sorry, %d is wrong. My number is greater than that.\n");
                else if (randomNumber<guess)
                    printf("Sorry, %d is wrong. My number is less than that.\n");
        }
        printf("\nYou have had 5 tries and have failed. The number was %d\n", randomNumber);
        return 0;
}
