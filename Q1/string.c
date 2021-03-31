
#include <stdio.h>
#include <ctype.h>

int main()
{
    char word[25];
    printf("Enter word: \n");
    scanf("%s", word);
    printf("----------------------------------------");
    int count = 0;
    int i = 0;
    while (i < strlen(word))
    {
        if (isupper(word[i]))
        {
            count += 1;
            word[i] = word[i] + 32;
            //‘A‘ has a ASCII value 65 and ‘a‘ has a ASCII value 97 (65+32)
        }
        i++;
    }
    printf("\nThere were %d Upper Case letters in word. \n", count);
    printf("Your word: %s", word);
}
