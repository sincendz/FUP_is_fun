//Recursão

#include <stdio.h>

void angulo_positivo(int num)
{
	if(num <360 && num >= 0){
		printf("%i\n", num);
	}

	else
	{
		if(num < 0)
		{
			
			angulo_positivo(360+num);
		}
		else
		{
			angulo_positivo(num-360);
		}
		
	}
}

int main()
{
	int angulo = 0;

	scanf("%i", &angulo);

	angulo_positivo(angulo);

	return 0;
}