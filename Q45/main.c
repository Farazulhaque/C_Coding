#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int A[3][5];
    srand(time(0));
    float total = 0;
    float avg;
    int x;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            A[i][j] = (rand() % (80 - 20 + 1)) + 20;
            total += A[i][j];
        }
    }
    avg = total / 15;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("The average value of A is %.2f", avg);
    printf("\nEnter an integer X between 40 and 80: ");
    scanf("%d", &x);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (A[i][j] < avg)
            {
                A[i][j] = x;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}