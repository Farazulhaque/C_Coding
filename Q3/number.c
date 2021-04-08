
#include <stdio.h>

int main()
{
    int i, n;

    /* Input upper limit from user */
    printf("Enter N: ");
    // Store the inputted number N in a variable n
    scanf("%d", &n);

    /*
     * Start loop counter from 1 (i=1) and go till n-1 (i<n)
     * increment the loop count by 1 to get the next value. 
     * For each repetition print the value of i.
     */
    for (i = 1; i < n; i++)
    {
        printf("%d, ", i);
    }
    /*
    To print the last number without colon, print last 
    number by coming out of the loop and print it without semicolon
    */
    printf("%d", n);
    return 0;
}