#include <stdio.h>

int mais_velho(int m,int a, int b)
{
	int c = m - (a+b);
	int maior = (a > b) ? a : b;
	maior = (c > maior) ? c : maior;

	return maior;
}

int main()
{
	int m,a,b;

	scanf("%i",&m);
	scanf("%i",&a);
	scanf("%i",&b);

	printf("%i\n",mais_velho(m,a,b) );
	
	return 0;
}