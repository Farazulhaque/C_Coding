#include <stdio.h>
int main()
{
    int x = 10;
    int y = 20;
    int *pInt;
    int **dpInt;

    dpInt = &pInt;
    pInt = &x;
    *pInt = y;

    printf("NOW: POINTER = %d AND y = %d \n", **dpInt, y);
    return 0;
}