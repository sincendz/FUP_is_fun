#include <stdio.h>

int meio(int a, int b, int c)
{
	int maior = (a > b) ? a : b;
	maior = (maior > c) ? maior : c;

	int menor = ( a < b) ? a : b;
	menor = (menor < c) ? menor :c;

	if ((a == maior && b ==menor) || ((a == menor && b == maior)) ) 
	{
		return c;
	}
	else if ( (a == maior && c ==menor) || ((a == menor && c == maior)) )
	{
		return b;
	}
	return a;	
}

int main(void)
{
	int a,b,c;

	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);

	printf("%i\n", meio(a,b,c) );

	return 0;
}