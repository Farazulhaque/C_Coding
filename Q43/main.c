#include <stdio.h>
#include <string.h> //allows use for strings
#include "functions.h"

int main(void)
{
    char sampleText[250]; //variable for user input

    printf("Enter a sample text:\n");             //asks user for input
    fgets(sampleText, sizeof(sampleText), stdin); //reads user input string
    printf("\nYou entered: %s", sampleText);

    PrintMenu(sampleText); //calls PrintMenu() function
}