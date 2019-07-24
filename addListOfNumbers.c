// Adding a list of numbers

#include <stdio.h>

int main (void)
{
	// Local Declarations 
	int x;
	int sum = 0;
	
	// Statements
	printf("Enter your numbers: <EOF> to stop.\n");
	while (scanf("%d", &x) != EOF)
		sum += x;
	
	
	printf("\nThe total is: %d\n", sum);
	
	return 0;
} // main
