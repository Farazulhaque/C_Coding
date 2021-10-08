#include <stdio.h>  /* add to this at the end */
#include <stdlib.h> /* */
#include <string.h> /* */
#include <math.h>   /* */

/* Max size for password */
#define MAX_PASSWORD_SIZE 21
/* Max size for username */
#define MAX_NAME_SIZE 16
/* Max number of passwords that can be stored */
#define MAX_PASSWORDS_SIZE 20

/* Basic password structure */
typedef struct
{
    char pswdName[MAX_NAME_SIZE];
    char pswd[MAX_PASSWORD_SIZE];
    int priority;
} pswd_t;
/******************************************************************************
* Function Prototypes
******************************************************************************/
void printMenu(void);
void addPswd(pswd_t passwordList[], int *size);
void removePswd(pswd_t passwordList[], int *size);
void changePswd(pswd_t passwordList[], int size);
void viewPswds(pswd_t passwordList[], int size);
/******************************************************************************
* Main
******************************************************************************/
int main(void)
{
    pswd_t passwordList[MAX_PASSWORDS_SIZE];
    /* Choice - number entered by user,
size - number of passwords on passwordlist */
    int size = 0, choice;
    /* Checks the user's choice and will carry out the assinged process */
    do
    {
        /* Prompt menu and allows user input */
        printMenu();
        printf("Enter your choice>");
        scanf("%d", &choice);
        getchar();
        /* Validating choice */
        if (choice < 1 || choice > 5)
        {
            printf("Invalid choice.\n");
        }
        else
        {
            switch (choice)
            {
            case 1:
                /* Creates new password through addPswd function and stores
into next element in the passwordList array */
                addPswd(passwordList, &size);
                break;
            case 2:
                /* Check if passwordList array is empty. */
                if (size == 0)
                {
                    printf("No password/s found.\n");
                }
                else
                {
                    /* Calls the viewPswds function which displays
all passwords. */
                    viewPswds(passwordList, size);
                }
                break;
            case 3:
                /* Check if passwordList array is empty. */
                if (size == 0)
                {
                    printf("No password/s found.\n");
                }
                else
                {
                    /* remove function */
                    removePswd(passwordList, &size);
                }
                break;
            case 4:
                /* Check if passwordList array is empty. */
                if (size == 0)
                {
                    printf("No password/s found.\n");
                }
                else
                {
                    /* change function */
                    changePswd(passwordList, size);
                }
                break;
            } /* Switch complete */
        }
    } while (choice != 5); /* Keeps reading user choices when a choice is
completed until 5 is input. */
    return 0;
}

void printMenu(void)
{
    printf("\n"
           "1. Add password\n"
           "2. View all password/s\n"
           "3. Remove password\n"
           "4. Change password\n"
           "5. Exit\n");
}

void addPswd(pswd_t passwordList[], int *size)
{
    if ((*size) < MAX_PASSWORDS_SIZE)
    {
        /* Temporary variable created to insert into employeelist */
        pswd_t temp;
        int invalidInput = 1;
        /* Prompt user to enter personal answers for the employee data */
        do
        {
            invalidInput = 1;
        first:
            printf("Enter Username:Name should not exceed 15 charcters>");
            /* Validation for user name */
            fgets(temp.pswdName, MAX_NAME_SIZE, stdin);
            if (!strchr(temp.pswdName, '\n'))
            {
                while (fgetc(stdin) != '\n')
                    ;
            }
            int len = strlen(temp.pswdName);
            if (temp.pswdName[len - 1] == '\n' || temp.pswdName[len - 1] == '?')
            {
                temp.pswdName[len - 1] = '\0';
            }
            if (temp.pswdName[len - 1] < 0 || temp.pswdName[len - 1] > 15)
            {
                printf("Invalid password. ");
                goto first;
                invalidInput = 0;
            }
        } while (invalidInput == 0);

        /* Produce and Validate the read input by user */
        do
        {
            invalidInput = 1;
        second:
            printf("Enter password:Password should not exceed 20 characters>");
            fgets(temp.pswd, MAX_PASSWORD_SIZE, stdin);
            if (!strchr(temp.pswd, '\n'))
            {
                while (fgetc(stdin) != '\n')
                    ;
            }
            int length = strlen(temp.pswd);
            if (temp.pswd[length - 1] == '\n' || temp.pswd[length - 1] == '?')
            {
                temp.pswd[length - 1] = '\0';
            }
            if (temp.pswd[length - 1] < 0 || temp.pswd[length - 1] > 20)
            {
                printf("Invalid password. ");
                goto second;
                invalidInput = 0;
            }
        } while (invalidInput == 0);
        /* Temp is added to the passwordList */
        passwordList[(*size)] = temp;
        (*size)++;
    }
    else
        /* Ensures size will not surpass the MAX_PASSWORDS_SIZE */
        printf("Maximum number of passwords reached.\n");
}

void viewPswds(pswd_t passwordList[], int size)
/* Promt the password list to display */
{
    /* layout of the categories */
    printf("%-15s %s\n", "Username", "Password");
    printf("%-15s %s\n", "---------------", "--------------------");

    int i;
    for (i = 0; i < size; i++)
    {
        /* layout of the user input */
        printf("%-15s %-15s\n", passwordList[i].pswdName,
               passwordList[i].pswd);
    }
}

void removePswd(pswd_t passwordList[], int *size)
{
    viewPswds(passwordList, *size);
    char position;
    int i;
    /* Prompt user to enter row number */
    printf("Enter row number[1-%d] to remove>", *size);
    scanf("%c", &position);
    while (position != '\n' && position != '\r'){
        printf("Invalid row number. Enter row number[1-%d] to remove>", *size);
        scanf("%c", &position);
    }
    // int position = position;
    if (position >= *size + 1)
    {
        printf("Password removal not possible, try again. ");
    }
    else
    {
        for (i = position - 1; i < *size; i++)
        {
            passwordList[i] = passwordList[i + 1];
            size -= 1;
        }

        for (i = 0; i < *size - 1; i++)
        {
            scanf("%s %s\n", passwordList[i].pswdName,
                  passwordList[i].pswd);
        }
        printf("Successfully removed row %d\n", position);
    }
}

void changePswd(pswd_t passwordList[], int size)
{
    viewPswds(passwordList, size);
    int invalidInput = 1;
    int a;
    char b[MAX_PASSWORD_SIZE];
    int c, status;
/* Takes row number input from user */
first:
    printf("Enter row number[1-%d] to change password>", size);
    status = scanf("%d", &a);
    getchar();
    while (status != 1)
    {
        while ((c = getchar()) != '\n' && c != EOF)
            ;
        printf("Invalid row number. ");
        goto first;
    }
    if (a < 1 || a > size)
    {
        printf("Invalid row number. ");
        goto first;
    }
    /* take the input for the new password */
    do
    {
        invalidInput = 1;
    second:
        printf("Enter new password>");
        fgets(b, MAX_PASSWORD_SIZE, stdin);
        if (!strchr(b, '\n'))
        {
            while (fgetc(stdin) != '\n')
                ;
        }
        int length = strlen(b);
        if (b[length - 1] == '\n' || b[length - 1] == '?')
        {
            b[length - 1] = '\0';
        }
        if (b[length - 1] < 0 || b[length - 1] > 20)
        {
            printf("Invalid password. ");
            goto second;
            invalidInput = 0;
        }
    } while (invalidInput == 0);
    strcpy(passwordList[a - 1].pswd, b);
    printf("Password has been changed\n");
    viewPswds(passwordList, size);
}