#include <stdio.h>

int main()
{
    int num1, num2;
    float result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num2 == 0)
    {
        printf("Error! Division by zero.");
    }
    else
    {
        result = (float)num1 / num2;
        printf("%.3f", result);
    }

    return 0;
}