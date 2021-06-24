#include <stdio.h>

int main()
{
    char name[20];
    int age;
    printf("Enter Your Name: ");
    scanf("%s", &name);
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 65 || age < 16)
    {
        printf("Hello %s, you are %d years old, you are not allowed to go outside until you get vaccinated");
    }
    else if (age >= 16 && age < 65)
    {
        printf("Hello %s, you are allowed to go outside. Stay safe!");
    }
}