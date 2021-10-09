#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char choice = ' ';
    printf("Welcome to my Command-Line Calculator (CLC)\n");
    printf("Developer: \n");
    printf("Version: 1\n");
    printf("Date: \n");
    printf("--------------------------------------------------------------\n");
    printf("Please select one of the following items: \n");
    printf("B) - Binary Mathematical Operations such as addition and subtraction.\n");
    printf("U) - Unary Mathematical Operations, such as square root and log.\n");
    printf("A) - Advance Mathematical Operations, using variables, arrays.\n");
    printf("V) - Define variables and assign them values.");
    printf("X) - Exit\n");
    while (choice != 'X')
    {

        printf("Please select your option (B, U, A, E, V, X): ");
        scanf("%c", &choice);
        int num1, num2;
        int result;
        int ch;
        if (choice == 'B')
        {
            printf("Please enter the first number: \n");
            scanf("%d", &num1);
            printf("Please enter the operation (+, -, *, /, %%, ^): \n");
            getchar();
            scanf("%c", &ch);
            printf("Please enter the second number: \n");
            getchar();
            scanf("%d", &num2);
            if (ch == '+')
            {
                result = num1 + num2;
            }
            else if (ch == '-')
            {
                result = num1 - num2;
            }
            else if (ch == '*')
            {
                result = num1 * num2;
            }
            else if (ch == '/')
            {
                result = num1 / num2;
            }
            else if (ch == '%')
            {
                result = num1 % num2;
            }
            else if (ch == '^')
            {
                result = pow(num1, num2);
            }
            printf("The result is %d\n", result);
            getchar();
        }
        else if (choice == 'U' || choice == 'A' || choice == 'E' || choice == 'V')
        {
            printf("Sorry, at this time I don.t have enough knowledge to serve you in this category.\n");
            getchar();
        }
        else if (choice == 'X')
        {
            printf("Thanks for using my simple Calculator. Hope to see you soon again. Goodbye!\n");
            exit(0);
        }
        else
        {
            printf("Invalid Choice.\n");
            getchar();
        }
    }

    return 0;
}