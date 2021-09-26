#include <stdio.h>

int main()
{
    const int NUM_ELEMENTS = 20; // Number of input integers
    int size;
    int userVals[NUM_ELEMENTS]; // Array to hold the user's input integers

    // get array size
    printf("Enter Number of integers: ");
    scanf("%d", &size);
    // ask again if array size is greter than 20
    while (size > NUM_ELEMENTS)
    {
        printf("Enter Number of integers less than 20: ");
        scanf("%d", &size);
    }

    // add array elements to userVals array
    // Loop starts from 0 and end at size - 1
    for (int i = 0; i < size; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &userVals[i]);
    }

    // Printing original array
    printf("\nOriginal Array : [ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", userVals[i]);
        if (i != size - 1)
        {
            printf(", ");
        }
    }

    // Printing reversed Array
    // Loop starts from size - 1 and end at 0
    printf(" ]\nReversed Array : [ ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", userVals[i]);
        if (i != 0)
        {
            printf(", ");
        }
    }
    printf(" ]");

    return 0;
}
