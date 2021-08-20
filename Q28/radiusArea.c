#include <stdio.h>
#define PI 3.14159

void main()
{
    // initialise variable n, i = 0
    int n, i = 0;
    // create array radius and area of size 100
    float radius[100], area[100];
    // function prototype
    float process(float radius);
    printf(" To STOP, enter O for the radius\n\n");
    printf("Radius = ?");
    // store first input ar radius[i], here i = 0
    scanf("%f", &radius[i]);
    // and now loop to get user input until user enter 0
    while (radius[i] != 0)
    {
        // if user input -ve number then area = 0
        if (radius[i] < 0)
            area[i] = 0;
        // else call process function to calculate area
        else
            area[i] = process(radius[i]);
        // get next user input
        printf("Radius = ?");
        scanf("%f", &radius[++i]);
    } //end while
    n = i - 1;
    printf("\nSummary of Results\n\n");
    // loop to print radius and there area
    for (i = 0; i <= n; ++i)
        printf("Radius = %.2f Area = %.2f\n", radius[i], area[i]);
} //end main

// to calculate area
float process(float r)
{
    // create variable a to store area
    float a;
    // formula to calculate area
    a = PI * r * r;
    // return area
    return (a);
} //end process