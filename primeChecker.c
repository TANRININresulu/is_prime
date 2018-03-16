#include <stdio.h>

int prime(int num)
{
	int counter=0;

	for(int i=1 ; i<=num ; i++)
	{
		if(num % i == 0)
		{
			counter++;
		}
	}

	if(counter==2)
	{
		printf("%d ", num);
	}

	return 0;
}

int main()
{
	int num1, num2, num3, num4, num5, 
	    num6, num7, num8, num9, num10;

	printf("Enter 10 numbers between 0 and 1000:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, 
	                                       &num6, &num7, &num8, &num9, &num10);

	printf("The prime numbers: ");

	prime(num1);
	prime(num2);
	prime(num3);
	prime(num4);
	prime(num5);
	prime(num6);
	prime(num7);
	prime(num8);
	prime(num9);
	prime(num10);

	return 0;
}
