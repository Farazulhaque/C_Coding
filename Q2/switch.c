#include <stdio.h>
#include <string.h>

int main()
{
    //initialising all the variables
    int menu;
    char cheese[3];
    float total;
    int chese;

    printf("1 - Single meat hamburger $2.99\n");
    printf("2 - Double meat hamburger $3.99\n");
    printf("3 - Salad with no meat $4.99\n");
    printf("4 - Salad with meat $5.99\n");

    // storing the user input in menu variable
    printf("Enter the menu number you want: ");
    scanf("%d", &menu);

    // storing the choice of cheese or not in cheese variable
    printf("You want cheese or not? ");
    scanf("%s", &cheese);

    // comparing the value stored in cheese variable with "yes"
    if (strcmp(cheese, "yes") == 0)
    {
        chese = 1;
    }
    else
    {
        chese = 0;
    }

    switch (menu)
    {
    case 1:
        total = (chese + 2.99) + ((chese + 2.99) * 0.0825);
        printf("Total cost = %.2f", total);
        break;
    case 2:
        total = (chese + 3.99) + ((chese + 3.99) * 8.25);
        printf("Total cost = %.2f", total);
        break;
    case 3:
        total = (chese + 4.99) + ((chese + 4.99) * 8.25);
        printf("Total cost = %.2f", total);
        break;
    case 4:
        total = (chese + 5.99) + ((chese + 5.99) * 8.25);
        printf("Total cost = %.2f", total);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}