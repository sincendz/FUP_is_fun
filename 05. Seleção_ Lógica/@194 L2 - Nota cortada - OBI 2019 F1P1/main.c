#include <stdio.h>

void valor(int B, int T)
{
	int area_retangulo = 70 *160;
	int area_recortada = (T*70) + ( ( (B-T) *70) /2);

	if ( (area_recortada) == (area_retangulo /2) )
	{
		printf("0\n");
	}
	else if ( (area_recortada) > (area_retangulo /2))
	{
		printf("1\n");
	}
	else 
	{
		printf("2\n");
	}
}

int main()
{
	int B,T;
	scanf("%i", &B);
	scanf("%i", &T);

	valor(B,T);

	return 0;
}