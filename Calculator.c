#include <stdio.h>

int main(void)
{
	float x;
	float y;
	printf("Please enter a number:\n");
	scanf("%f", &x);
	printf("Enter another number:\n");
	scanf("%f", &y);

	printf("\n");

	int choice;

	printf("Please choose what you would like to do with these numbers:\n1)Add\n2)Subtract\n3)Multiply\n4)Divide\n\n");
	scanf("%d", &choice);

	if(choice == 1)
	{
		printf("Result: %.0f\n", (x+y));
	}
	else if(choice == 2)
	{
		printf("Result: %.0f\n", (x-y));
	}  
	else if(choice == 3)
	{
		printf("Result: %.0f\n", (x*y));
	}
	else if(choice == 4)
	{
		printf("Result: %.5f\n", (x/y));
	}


}
