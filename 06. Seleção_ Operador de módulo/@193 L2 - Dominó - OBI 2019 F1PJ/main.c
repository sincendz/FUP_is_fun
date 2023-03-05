#include <stdio.h>

int quantidade(int N)
{
	return ((N+1)*(N+2))/2;
}

int main()
{
	int N;
	scanf("%i", &N);

	printf("%i\n",quantidade(N) );

	return 0;
}