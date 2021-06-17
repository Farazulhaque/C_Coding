#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int get_input_firstname()
{
    char f[50];
    printf("Enter your first name: ");
    scanf("%s", &f);
    validate_input_firstname(f);
}
void validate_input_firstname(char f[50])
{
    if (strlen(f) > 1)
    {
        if ((strlen(f) > 64 && strlen(f), 91) || (strlen(f) > 96 && strlen(f) < 123))
        {
            printf("Please proceed with the next steps.\n");
        }
        else
        {
            printf("Invalid first name.");
            exit(0);
        }
    }
    else
    {
        printf("The fist name cannot be one with one letter.\n");
        exit(0);
    }
}
int get_input_lastname()
{
    char l[50];
    printf("Enter your last name: ");
    scanf("%s", &l);
    validate_input_lastname(l);
}
void validate_input_lastname(char l[50])
{
    if (strlen(l) > 1)
    {
        if ((strlen(l) > 64 && strlen(l), 91) || (strlen(l) > 96 && strlen(l) < 123))
        {
            printf("Please proceed with the next steps.\n");
        }
        else
        {
            printf("Invalid last name.");
            exit(0);
        }
    }
    else
    {
        printf("The last name cannot be one with one letter.\n");
        exit(0);
    }
}
int get_input_age()
{
	int a;
    printf("Enter your birth year:");
    scanf("%d", &a);
    validate_input_age(a);
}
void validate_input_age(int a)
{
    if (a != NULL)
    {
        if ((2021 - a) >= 16)
        {
            printf("Please proceed with the next steps.\n");
        }
        else
        {
            printf("Sorry, you are not eligible to proceed!\n");
            exit(0);
        }
    }
    else
    {
        printf("Sorry, the birth year is invalid!\n");
        exit(0);
    }
}

int main()
{
    char first_name, last_name, f, l;
    int birth_year, a;
    f = get_input_firstname();
    l = get_input_lastname();
    a = get_input_age();
    return 0;
}
