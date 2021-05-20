#include<stdio.h>
int main()
{
	int num1,num2,num3;
	
	printf("Enter three numbers separated by space:");
	// store three numbers in num1, num2 and num3 variable
	scanf("%d %d %d",&num1,&num2,&num3);
	
	//check for smallest number
	if(num1 < num2 && num1 < num3)
	{
		printf("%d is smallest",num1);
	}
	else if(num2 < num3)
	{
		printf("%d is smallest",num2);
	}
	else
	{
		printf("%d is smallest",num3);
	}	
	return 0;
}
