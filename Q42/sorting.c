#include <stdio.h>
#include <string.h>

#define MAXSTRINGS 100
#define MAXLENGTH 51 //50+1

void selectionSort(char str[MAXSTRINGS][MAXLENGTH], int count)
{

    for (int i = 0; i <= count; i++)
    {
        for (int j = i + 1; j <= count; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                char temp[25];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}
int main()
{
    int count;
    char str[MAXSTRINGS][MAXLENGTH];

    printf("Enter how many names: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Name %d: ", i + 1);
        fflush(stdin);
        gets(str[i]);
        strcpy(str[i], strlwr(str[i]));
    }

    selectionSort(str, count);

    printf("Sorted Names:");

    for (int i = 0; i <= count; i++)
    {
        printf("%s\n", str[i]);
    }

    printf("\n");
    char searchStr[MAXLENGTH];
    while (1)
    {
        printf("Enter search string: ");
        gets(searchStr);
        strcpy(searchStr, strlwr(searchStr));
        if (strcmp(searchStr, "exit") == 0)
        {
            printf("bye!");
            break;
        }
        else
        {
            int found = 0;
            for (int i = 0; i <= count; i++)
            {
                if (strstr(str[i], searchStr))
                {
                    printf("%s\n", str[i]);
                    found = 1;
                }
            }
            if (found == 0)
            {
                printf("Not Found\n");
            }
        }
    }
    // printf("%s", searchStr);

    return 0;
}