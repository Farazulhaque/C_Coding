#include <stdio.h>

int main()
{
	int array[6];
	int i;
	int sum = 0;
	float avg;
	printf("Enter 6 numbers: ");
	for (i = 0; i < 6; i++)
	{
		scanf("%d,", &(array[i]));
	}
	for (i = 0; i < 6; i++)
	{
		sum += array[i];
	}
	printf("Sum = %d\n", sum);
	avg = sum / 6;
	printf("Avg = %.2f", avg);
	return 0;
}
