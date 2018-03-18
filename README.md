# primeChecker
Basic Prime Checker Algorithm:

void prime( int num )
{
	int counter=0;

	for( int i=1; i<=num; i++)
	{
		if( num % i == 0 )	counter++;
	}

	if( counter==2 )	printf("%d ", num);
}
