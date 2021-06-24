#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("You have entered 0");
    }
    else if (n > 0)
    {
        printf("Number %d is a positive number", n);
    }
    else if (n < 0)
    {
        printf("%d is negative", n);
    }
}