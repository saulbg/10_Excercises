///2. Write a program to check whether a number is even or odd. 
#include <stdio.h>

int main()
{	
	///Initiates variables
	int num;
	
	///Prompt user input
	printf("Input a number:");
	scanf("%d",&num);

	///Output
	if(num % 2 == 0) ///If number is perfectly divisible by 2, then its even
	{
		printf("\nEven\n");
	}
	else	///Otherwise its odd
	{
		printf("\nOdd\n");
	}
	
	return 0;
}
