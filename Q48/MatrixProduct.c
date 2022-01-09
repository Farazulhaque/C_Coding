#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10], b[10][10], c[10][10], m, n, i, j, l, k;
    clrscr();
    printf("\nEnter order of A matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter A matrix \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("\nEnter order of B matrix: ");
    scanf("%d %d", &n, &l);
    printf("Enter B matrix \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < l; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < l; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    printf("\n Resultantant matrix is \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < l; j++)
            printf("%6d", c[i][j]);
        printf("\n");
    }
    getch();
}
