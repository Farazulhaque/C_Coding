#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 10

int main()
{
    char grid[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if ((i + j) % 2 == 0)
            {
                grid[i][j] = 'X';
            }
            else
            {
                grid[i][j] = '-';
            }
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}