#include <stdio.h>

int main()
{
    int num = 8;
    printf("if num = %d then sum = %d\n", num, sumPositiveEvenNumbers(num));
    num = 7;
    printf("if num = %d then sum = %d\n", num, sumPositiveEvenNumbers(num));
    num = 1;
    printf("if num = %d then sum = %d", num, sumPositiveEvenNumbers(num));
}

int sumPositiveEvenNumbers(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num % 2 != 0)
    {
        return sumPositiveEvenNumbers(num - 1);
    }
    else
    {
        return num + sumPositiveEvenNumbers(num - 1);
    }
}
