#include <stdio.h>

void impar_ou_par(int P, int d_1, int d_2)
{
	if( (P ==0) && ( ((d_1+d_2)%2) == 0 ) )
	{
		printf("0\n");
	}
	else if ( (P == 0) && ( ((d_1+d_2)%2) != 0 ) ) 
	{
		printf("1\n");
	}
	else if ((P == 1) && ( ((d_1+d_2)%2) == 0 ) )
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
}	

int main()
{
	int P,D_1,D_2;
	//P = 0 então Alice gritou “par”, ao passo que se P=1 
	//então Bob gritou “par”. 
	scanf("%i", &P);
	scanf("%i", &D_1);
	scanf("%i", &D_2);

	impar_ou_par(P,D_1,D_2);

	return 0;
}