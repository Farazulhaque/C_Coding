#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 18)
    {
        int num1, num2;
        printf("Enter num1: ");
        scanf("%d", &num1);
        printf("Enter num2: ");
        scanf("%d", &num2);
        if (num1 > num2)
        {
            printf("%d is biggest number", num1);
        }
        else
        {
            printf("%d is biggest number", num2);
        }
    }
    else
    {
        char name[20];
        int year;
        printf("Enter User Name: ");
        scanf("%s", &name);
        printf("Enter birth year: ");
        scanf("%d", &year);
        printf("User Name: %s", name);
        printf("Birth Year: %d", year);
    }
}