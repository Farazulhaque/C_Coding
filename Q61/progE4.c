#include <stdio.h>

int main()
{
	system("cls");
	float num1, num2;
	char op;

	printf("\nEnter your first number : ");
	scanf("%f", &num1);
	printf("\nEnter your second number : ");
	scanf("%f", &num2);
	getchar();
	printf("\nEnter operator : ");
	scanf("%c", &op);

	switch (op)
	{
	case '+':
		printf("%f %c %f = %f", num1, op, num2, (num1 + num2));
		break;
	case '-':
		printf("%f %c %f = %f", num1, op, num2, (num1 - num2));
		break;
	case '*':
		printf("%f %c %f = %f", num1, op, num2, (num1 * num2));
		break;
	case '/':
		printf("%f %c %f = %f", num1, op, num2, (num1 / num2));
		break;

	default:
		break;
	}

	return 0;
}