// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Function that generate a number in
// the range [1, N] and checks if the
// generated number is the same as the
// guessed number or not
void guess(int N, int guesses[], int *win, int *lost)
{
    int number, guess, numberofguess = 0;
    int i = 0;
    // Generate a random number
    number = rand() % N;

    printf("Guess a number between 1 and %d: ", N);

    // Using a do-while loop that will
    // work until user guesses
    // the correct number
    do
    {

        if (numberofguess >= 10)
        {
            printf("You Loose. ");
            *lost += 1;
            break;
        }

        // Input by user
        scanf(" %d", &guess);
        guesses[i] = guess;
        i++;
        numberofguess++;
        // When user guesses lower
        // than actual number
        if (guess > number)

        {
            printf("The number is less than %d\n", guess);
        }

        // When user guesses higher
        // than actual number
        else if (number > guess)

        {
            printf("The number is greater than %d\n", guess);
        }

        // Printing number of times
        // user has taken to guess
        // the number
        else
        {
            printf("You win. ");
            *win += 1;
            break;
        }

    } while (guess != number);

    printf("The number is %d. Your Tries: ", guess);
    for (int j = 0; j < numberofguess; j++)
    {
        printf(" %d", guesses[j]);
    }
}

// Driver Code
int main()
{
    int win = 0, lost = 0;
    char again = 'Y';
    int guesses[10];
    // Function call
    while (again == 'Y')
    {
        guess(100, guesses, &win, &lost);
        getchar();
        printf("\nTry again?(Y/N): ");
        scanf("%c", &again);
    }
    printf("\nYour stats: %d win, %d lose", win, lost);
    return 0;
}
