#include <stdio.h>

int main()
{
    float x, y, z;
    x = 5.2;
    y = 3.5;
    z = (y * (x * x - y * y)) / (x * x + 3 * x * y);
    printf("%.2f", z);
    return 0;
}