#include <stdio.h>

void economico(float al, float gas, float Ra, float Rg)
{
	if ((Ra/al) == (Rg/gas))
	{
		printf("G\n");
	}
	else if ((Ra/al) > (Rg/gas))
	{
		printf("A\n");
	}
	else if ((Ra/al) < (Rg/gas))
	{
		printf("G\n");
	}
	
}

int main()
{
	float A,G,Ra,Rg;

	scanf("%f", &A);
	scanf("%f", &G);
	scanf("%f", &Ra);
	scanf("%f", &Rg);

	economico(A,G,Ra,Rg);


	return 0;
}