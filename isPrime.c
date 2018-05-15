#include <stdio.h>

int isPrime (int number)
{
	int number_Of_Dividers = 0;

	for (int divider = 1; divider <= number; divider++)
	{
		if (number % divider == 0)
			number_Of_Dividers++;
	}

	if (number_Of_Dividers == 2)
	{
		printf ("\n%d is a Prime\n", number);
		return 1;
	}
	else
	{
		printf ("\n%d is a Composite\n", number);
		return 0;
	}
}

void main ()
{
	int num1;
	printf ("\nEnter any number: ");
	scanf ("%d", &num1);
	isPrime (num1);
}
