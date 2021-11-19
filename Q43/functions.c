#include <stdio.h>
#include <stdlib.h>
#include <string.h>    //allows use for strings
#include "functions.h" //allows function to call prototypes from functions.h

//function definitions

//prints command menu
void PrintMenu(char *sampleText)
{

    char menuOption; //variable for menu option

    do
    { //loop for the displayed menu

        printf("\nMENU\n");
        printf("c - Number of non-whitespace characters\n");
        printf("w - Number of words\n");
        printf("f - Fix capitalization\n");
        printf("r - Replace all !'s\n");
        printf("s - Shorten spaces\n");
        printf("q - Quit\n\n");

        do
        { //loops until valid input is given
            printf("Choose an option:\n");
            scanf(" %c", &menuOption);
        } while (menuOption != 'c' && menuOption != 'w' && menuOption != 'f' && menuOption != 'r' && menuOption != 's' && menuOption != 'q');

        ExecuteMenu(menuOption, sampleText); //calls function using user inputs

    } while (menuOption == 'c' || menuOption == 'w' || menuOption == 'f' || menuOption == 'r' || menuOption == 's'); //loops until player decides to quit
    //loops until user decides to quit
}

//Performs the menu options, according to the user's choice
void ExecuteMenu(char menuOption, char *userInput)
{

    int numChars = 0;
    int numWords = 0;

    if (menuOption == 'c')
    { //calls GetChars() function
        numChars = GetChars(userInput);
        printf("Number of non-whitespace characters: %d\n", numChars);
    }
    else if (menuOption == 'w')
    { //calls GetWords() function
        numWords = GetWords(userInput);
        printf("Number of words: %d\n", numWords);
    }
    else if (menuOption == 'f')
    { //calls FixCapitals() function
        FixCapitals(userInput);
        printf("Edited text: %s", userInput);
    }
    else if (menuOption == 'r')
    { //calls ReplaceExclamation() function
        ReplaceExclamation(userInput);
        printf("Edited text: %s", userInput);
    }
    else if (menuOption == 's')
    { //calls ShortenSpaces() function
        ShortenSpaces(userInput);
        printf("Edited text: %s", userInput);
    }
}

//takes a constant string as a parameter and returns the number of characters in the string
int GetChars(char *userInput)
{

    int numChars = 0;
    int i = 0;

    for (i = 0; i <= strlen(userInput) - 1; i++)
    { //reads through each character in user input
        if (userInput[i] != ' ' && userInput[i] != '\t' && userInput[i] != '\n')
        {               //determines whether or not a character is whitespace
            numChars++; //adds to count
        }
    }

    return numChars;
}

//takes a constant string as a parameter and returns the number of words in the string
int GetWords(char *userInput)
{

    char *words = (char *)malloc(strlen(userInput) * sizeof(char)); //creating a new character array

    int i;
    int j = 0;
    int count = 0;

    for (i = 0; i <= strlen(userInput) - 2; i++)
    { //reads through user input
        if (userInput[i] != ' ' || (userInput[i] == ' ' && userInput[i + 1] != ' '))
        {                              //determines whether or not a character is whitespace
            words[j++] = userInput[i]; //stores each word in words
        }
    }

    words[j++] = userInput[i]; //stores last word in words
    words[j] = '\0';           //null at end of words

    for (i = 0; i <= strlen(words) - 1; i++)
    { //reads through user input
        if (words[i] == ' ')
        {            //determines whether or not a character is a space
            count++; //adds to count
        }
    }

    return count + 1;
}

//takes a string parameter and updates the string by replacing lowercase letters at the beginning of sentences with uppercase letters
void FixCapitals(char *userInput)
{

    userInput[0] = userInput[0] - 32; //capitalizes first letter
    int i;

    for (i = 1; i <= strlen(userInput) - 3; i++)
    { //reads through user input
        if (userInput[i] == '.' || userInput[i] == '!')
        { //searches for periods and excalmation points
            while (userInput[i + 1] == ' ')
            { //loops until a space
                i++;
                userInput[i + 1] = userInput[i + 1] - 32; //capitalizes next character
            }
        }
    }
}

//takes a string parameter and updates the string by replacing each '!' character in the string with a '.' character
void ReplaceExclamation(char *userInput)
{

    int i;

    for (i = 0; i <= strlen(userInput) - 1; i++)
    { //reads through user input
        if (userInput[i] == '!')
        {                       //searches for excalmation points
            userInput[i] = '.'; //replaces excalmation point with a period
        }
    }
}

//takes a string parameter and updates the string by replacing all sequences of 2 or more spaces with a single space
void ShortenSpaces(char *userInput)
{

    char *array = (char *)malloc(strlen(userInput) * sizeof(char)); //creates new character array
    int i;
    int j = 0;

    for (i = 0; i <= strlen(userInput) - 2; i++)
    { //removes the extra spaces from array as it reads through user input
        if (userInput[i] != ' ' || (userInput[i] == ' ' && userInput[i + 1] != ' '))
        {
            array[j++] = userInput[i];
        }
    }

    array[j++] = userInput[i];
    array[j] = '\0'; //null at end of input

    strcpy(userInput, array);
}