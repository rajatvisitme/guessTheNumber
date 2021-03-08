//  Model: Guess The Number (Game)
//  Author : Rajat Agrawal (rajat.visitme@gmail.com)
//  Initial commit: 08-03-2021
//  Last modification: 08-03-2021

//  Include all necessory libraries.
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // This header file required to access the time() function.

int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;
    
    // printf("The number is %d", number); // The correct number.
    
    printf("Guess a number between 1 and 100\n");
    do{
        scanf("%d", &guess);
        // Condition if the guessed number is greater than the actual number.
        if(guess>number){
            printf("Lower number please!\n");
        }
        // Condition if the guessed number is smaller than the actual number.
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("***You guesses it in %d attempts!***\n", nguesses);
        }
        nguesses++; // Counting the number of guesses.
    }while(guess!=number); // Loop will terminate when the condition fails.
    

    return 0;
}