#include <stdio.h>

int main()
{
    int base;
    int height;
    int area;
    printf("Enter side of a shape's base: ");
    scanf("%d", &base);
    printf("Enter side of shape's height: ");
    scanf("%d", &height);
    area = calculateArea(base, height);
    printf("Side area of the shape = %d", area);
}

int calculateArea(int base, int height)
{
    int area = base * height;
    return area;
}