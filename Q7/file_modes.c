#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            char command[50];
            strcpy(command, "find ");
            strcat(command, argv[i]);
            // %M for showing permissions and %f for showing filenames
            strcat(command, " -printf \"%M %f\n\"");
            system(command);
        }
    }
    else
    {
        printf("Usage: /file modes filenames\n") :
    }
}