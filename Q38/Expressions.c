#include <stdio.h>

int main()
{
    int x = 3, y = 4, z = 5, result;

    result = x > y || y < z;
    printf("(a) x > y || y < z = %d\n", result);

    result = x % y + z == x + z;
    printf("(b) x %% y + z == x + z = %d\n", result);

    result = x / y++ + z;
    printf("(c) x / y++ + z = %d\n", result);

    result = !(x < y);
    printf("(d) !(x < y) = %d\n", result);

    return 0;
}