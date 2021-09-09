#include <stdio.h>
#include <math.h>

int main()
{
    /* Define variables */
    float value;
    float result;

    while (1)
    {
        // get user input
        printf("Enter floating-point number: ");
        scanf("%f", &value);
        // check if the value entered is positive or negative
        if (value > 0)
        {
            /* Calculate the log10 of the entered value */
            result = log10(value);

            /* Display the result of the calculation */
            printf("The Base 10 Logarithm of %.2f is %.4f\n", value, result);
        }
        // if negative then break the loop
        else
            break;
    }

    return 0;
}
