#include <stdio.h>

int maxOfTwo(int n1, int n2)
{
    // returning max of two numers
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

void main()
{
    //receive three interger
    int num1, num2, num3, x, y, max;
    printf("Enter first Number: ");
    scanf("%d", &num1);
    printf("Enter second Number: ");
    scanf("%d", &num2);
    printf("Enter third Number: ");
    scanf("%d", &num3);

    // calculate max of first and second number
    x = maxOfTwo(num1, num2);
    // calculate max of the output of x and the third number
    y = maxOfTwo(x, num3);

    // printing max of three numbers
    printf("Maximum of three numbers is: %d", y);
}
