#include <stdio.h>
int main()
{
    float Employees[4][2];
    printf("Please, input the Employees for the Salary and Bonus:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%f %f", &Employees[i][0], &Employees[i][1]);
    }
    printf("\nPrinting the Employees array: ");
    for (int i = 0; i < 4; i++)
    {
        printf("\n%.2f %.2f", Employees[i][0], Employees[i][1]);
    }
    // Add $60 to each employee's salary
    for (int i = 0; i < 4; i++)
    {
        Employees[i][0] = 60 + Employees[i][0];
    }
    printf("\n\nReprinting the Employees array: ");
    for (int i = 0; i < 4; i++)
    {
        printf("\n%.2f %.2f", Employees[i][0], Employees[i][1]);
    }
    float salary[4];
    for (int i = 0; i < 4; i++)
    {
        salary[i] = Employees[i][0];
    }
    // Printing the values of the salary array
    printf("\n\nPrinting the Salary array: ");
    for (int i = 0; i < 4; i++)
    {
        printf("\n%.2f", salary[i]);
    }
    return 0;
}
