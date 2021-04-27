// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Function that generate a number in
// the range [1, N] and checks if the
// generated number is the same as the
// guessed number or not
void guess(int N)
{
    int number, guess, numberofguess = 0;

    // Generate a random number
    number = rand() % N;

    printf("Guess a number between 1 and %d: ", N);

    // Using a do-while loop that will
    // work until user guesses
    // the correct number
    do
    {

        if (numberofguess > 8)
        {
            printf("\nYou Loose!\n");
            printf("%d", number);
            break;
        }

        // Input by user
        scanf(" %d", &guess);

        // When user guesses lower
        // than actual number
        if (guess > number)

        {
            printf("Lower number please!");
            numberofguess++;
        }

        // When user guesses higher
        // than actual number
        else if (number > guess)

        {
            printf("Higher number please!");
            numberofguess++;
        }

        // Printing number of times
        // user has taken to guess
        // the number
        else
            printf("You guessed the number in %d attempts!\n", numberofguess);

    } while (guess != number);
}

// Driver Code
int main()
{
    // Function call
    guess(100);

    return 0;
}
