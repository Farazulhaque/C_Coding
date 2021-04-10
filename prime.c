#include <stdio.h>

int isPrime(int num) //function that determines the prime number
{
    int i, m, flag = 0;
    m = num / 2;
    for (i = 2; i <= m; i++)
    {
        if (num % i == 0)
        {
            //not a prime number
            flag = 1;
            return flag;
        }
    }
    return flag;
}

int smallervalue(int num) // a prime number will be an output less than 'num'
{
    int prime = num;
    int found = 1;
    // 1 for false and 0 for true
    // Loop continuously until isPrime returns
    // true or 0 for a number less than num
    while (found == 1)
    {
        prime--;
        if (isPrime(prime) == 0)
            found = 0;
    }
    return prime;
}

int largervalue(int num) // a prime number will be an output larger than 'num'
{
    int prime = num;
    int found = 1;
    // 1 for false and 0 for true
    // Loop continuously until isPrime returns
    // true or 0 for a number greater than num
    while (found == 1)
    {
        prime++;
        if (isPrime(prime) == 0)
            found = 0;
    }
    return prime;
}

void main()
{
    //receive an interger
    int n;
    printf("Enter Number: ");
    // Store the inputted number N in a variable n
    scanf("%d", &n);

    //if it is a integer that isn't larger than 3, printf("write the integer more than 3")
    if (n < 3)
    {
        printf("write the integer more than 3");
    }

    //if it is a integer that is more than 3, but not a prime number,
    //printf(" The preceding prime number is %d, the latter one is %d.")
    else if (n > 3 && isPrime(n))
    {
        printf("The preceding prime number is %d, the latter one is %d.", smallervalue(n), largervalue(n));
    }

    //If it is prime number, printf( "%d is a prime number")
    else
    {
        printf("%d is a prime number", n);
    }
}
