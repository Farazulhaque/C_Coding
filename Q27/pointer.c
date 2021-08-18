// CS288:H3 Summer 2021
// Program Name:
// Author:
// Date:

#include <stdio.h>

int main()
{
    int x = 10;

    // print as a decimal
    printf("Value of variable x is: %d\n", x);

    //  print reference by address of variable x
    printf("Memory address of variable x is: %p\n", &x);

    // declare an integer pointer z
    // assign address of x to the pointer z
    int *z = &x;

    printf("Referece by pointer, address of variable x is: %p", z);

    return 3;
}
