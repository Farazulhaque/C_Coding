#include <stdio.h>
int main()
{
    int n, cube;
    printf("Input number of terms : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        cube = i * i * i;
        printf("Number is : %d and cube of the %d is :%d\n", i, i, cube);
    }
    return 0;
}