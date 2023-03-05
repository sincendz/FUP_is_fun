#include <stdio.h>

int main()
{
	int a,b;

	scanf("%i", &a);
	scanf("%i", &b);


	int cont = 0;                        

	if(b >= a)
	{
		while (b >= a)
		{
		if( (a % 2 == 0) && (a%3 == 0))
		{
			cont = cont + a;
		}
		++a;
		}
		printf("%i\n", cont);
	}
	else
		printf("invalido\n");
	return 0;
}