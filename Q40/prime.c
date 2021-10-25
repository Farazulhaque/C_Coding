#include <stdio.h>

int isPrime(int n);

int main()
{
    printf("Prime numbers between 1 and 10,000 are --> \n");
    for (int i = 1; i <= 10000; i++)
    {
        int result = isPrime(i);
        if (result == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

int isPrime(int n)
{
    int flag = 0;
    int m = n / 2;
    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    return flag;
}