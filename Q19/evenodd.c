#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("You have entered an even number: %d", n);
    }
    else
    {
        printf("You have entered an odd number: %d", n);
    }
}

// Output
// Enter a number: 8
// You have entered an even number: 8