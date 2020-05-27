///3. Write a program to find maximum between three numbers.
#include <stdio.h>
#include <stdlib.h>
 
int main()
	{
	int n1,n2,n3;
	printf("Type the first number: "); //Type first
	scanf("%i",&n1);
	printf("Type the first number: "); //Type Second
	scanf("%i",&n2);
	printf("Type the first number: "); // Type Third
	scanf("%i",&n3);

	if (n1 >= n2 && n1 >= n3)
	{ //Check if num 1 is the highest
		printf("%i is the maximun number.", n1);
	}
    	else if (n2 >= n1 && n2 >= n3)
	{ //Check if num 2 is the highest
		printf("%i is the maximun number.", n2);
	}
    	else if (n3 >= n1 && n3 >= n2)
	{ //Check if num 3 is the highest
        	printf("%i is the maximun number.", n3);
	}
	return 0;
	}
