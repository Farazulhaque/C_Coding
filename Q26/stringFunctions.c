#include <stdio.h>
#include <string.h>

int main()
{
    // declaring string
    char username[50], ic[50], storeusername[50], storeic[50];
    // declare integers
    int usernamelength, iclength;
    printf("Enter username: ");
    scanf("%s", username);
    usernamelength = strlen(username);
    if (usernamelength <= 8)
    {
        strcpy(storeusername, username);
        printf("Enter ic: ");
        scanf("%s", ic);
        iclength = strlen(ic);
        if (iclength <= 12)
        {
            strcpy(storeic, ic);
        }
        else
        {
            printf("\nInvalid ic");
            strcpy(storeic, "Default IC");
        }
        printf("\n%s", storeic);
    }
    else
    {
        printf("\nInvalid username");
        strcpy(storeusername, "Default name");
    }
    printf("\n%s", storeusername);

    return 0;
}
