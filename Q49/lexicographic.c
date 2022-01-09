#include <stdio.h>
#include <conio.h>
#include <strings.h>
#include <math.h>

int noOfDigits(int n)
{
    unsigned int number_of_digits = 0;

    do
    {
        ++number_of_digits;
        n /= 10;
    } while (n);

    return number_of_digits;
}

int main()
{
    int num, rem, qub, sum = 0, i, len;
    printf("Armstrong numbers between 0 to 500 are: ");

    for (i = 0; i <= 500; i++)
    {
        num = i;
        sum = 0;
        len = noOfDigits(i);
        while (num > 0)
        {
            rem = num % 10;
            qub = pow(rem, len);
            sum = sum + qub;
            num = num / 10;
        }
        if (sum == i)
        {
            printf("%d\n", sum);
        }
    }
}