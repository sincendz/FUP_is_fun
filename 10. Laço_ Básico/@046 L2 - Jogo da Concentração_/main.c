#include <stdio.h>

void concentracao(int a, int b)
{
	int b2 = b;
	printf("[");
	while ( a <= b2 )
	{
		printf(" %i %i",a,b);
		a++;
		b--;
	}
	printf(" ]\n");
	
}

int main()
{
	int a,b;

	scanf("%i", &a);
	scanf("%i", &b);

	concentracao(a,b);

	return 0;
}