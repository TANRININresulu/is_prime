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
		return 1;
	}
	
	else{
		return 0;
	}
}

int main()
{
	int flag = 0;
	int num1, num2, num3, num4, num5, 
	    num6, num7, num8, num9, num10;
	
	while(flag != -1)
	{
		printf("\nEnter 10 numbers between 0 and 1000:\n");
		scanf("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, 
	        	                               &num6, &num7, &num8, &num9, &num10);

		printf("\nThe prime numbers: ");

		num1 = prime(num1);
		num2 = prime(num2);
		num3 = prime(num3);
		num4 = prime(num4);
		num5 = prime(num5);
		num6 = prime(num6);
		num7 = prime(num7);
		num8 = prime(num8);
		num9 = prime(num9);
		num10 = prime(num10);


		if( num1==0 && num2==0 && num3==0 && num4==0 && num5==0 &&
			num6==0 && num7==0 && num8==0 && num9==0 && num10==0 )
		{
			printf("\nThere is not a prime number!\n");
		}

		else
		{
			printf("\n");
			flag = -1;
		}
	}
	return 0;
}
