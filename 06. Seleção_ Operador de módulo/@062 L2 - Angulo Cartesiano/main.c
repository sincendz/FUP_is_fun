#include <stdio.h>

void valor(int angulo)
{
	if(angulo >= 0 && angulo <=360)
	{
		printf("0\n");
	}
	else if (angulo > 360)
	{
		while(angulo > 360)
		{
			angulo = angulo -360;
		}
		printf("%i\n", angulo );
	}
	else if(angulo < 0)
	{
		while(angulo < -360)
		{
			angulo = angulo + 360;
		}
		int aux = 360;
		aux = aux + angulo;
		printf("%i\n", aux);
	}
}

int main()
{
	int angulo = 0;
	scanf("%i", &angulo);

	valor(angulo);

	return 0;
}