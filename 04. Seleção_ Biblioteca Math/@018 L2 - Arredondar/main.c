#include <stdio.h>

int ceil(float num)
{
	int retorno = num +1;
	return retorno;
}

int floor(float num)
{
	int retorno = num;
	return retorno;
}

int round(float num)
{
	int num_1 = num;

	if((num-0.5) >= num_1)
	{
		int retorno_cima = ceil(num);
		return retorno_cima;
	}
	else
	{
		int retorno_baixo = floor(num);
		return retorno_baixo;
	}
}

void arredondar(float n, char f)
{
	if(f == 'c')
	{
		printf("%i\n", ceil(n));
	}
	else if( f == 'f')
	{
		printf("%i\n", floor(n));
	}
	else if( f == 'r')
	{
		printf("%i\n", round(n));
	}

	else
	{
		printf("Char desconhecido\n");
	}
}

int main()
{
	char fun;
	float nota;

	scanf(" %c", &fun);
    scanf("%f", &nota);

	arredondar(nota,fun);

}