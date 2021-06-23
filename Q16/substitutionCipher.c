#include <stdio.h>
#include <string.h>

int main()
{
    char MylastnameStr[80];

    int key = 3;

    fgets(MylastnameStr, 80, stdin);
    // iterate through plain text letter by letter
    for (int i = 0, n = strlen(MylastnameStr); i < n; i++)
    {
        // checking if it is lowercase 97 = a to 112 = z and if it + 13 characters along.
        if (MylastnameStr[i] >= 'a' && MylastnameStr[i] <= 'z')
        {
            printf("%c", ((((MylastnameStr[i] - 'a') + key) % 26) + 'a') - 32); // print out uppercase (-32)
        }
    }

    printf("\n");
    return 0;
}