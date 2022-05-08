#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	int choice;
	printf("Enter a value for x: ");
	scanf("%d", &x);
	// printf("You entered %d", x);

	do
	{
		printf("\nChoose what calculation to perform using x:\n");
		printf("\t1 - Square root of x\n");
		printf("\t2 - Square of x\n");
		printf("\t3 - Base-10 logarithm of x\n");
		printf("(Enter a zero to exit)\n");
		printf("\nWhat is your choice? ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("The square root of x is %f\n", sqrt(x));
			break;
		case 2:
			printf("The square of x is %f\n", x * x);
			break;
		case 3:
			printf("The Base-10 logarithm of x is %f\n", log(x));
			break;
		default:
			if (choice != 0)
				printf("Your choice was not from the menu");
			printf("Please try again.\n");
			break;
		}
	} while (choice != 0);
	return 0;
}