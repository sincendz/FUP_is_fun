#include <stdio.h>

void resultado(int v, int c1, int c2 )
{
	int desvio1 = c1 - v;
	int desvio2 = c2 - v;

	if(desvio1 < 0)
	{
		desvio1 = desvio1 * -1;
	}
	if(desvio2 < 0)
	{
		desvio2 = desvio2 * -1;
	}

	if(desvio2 == desvio1)
	{
		printf("empate\n");
	}

	else if(desvio2 > desvio1)
	{
		printf("primeiro\n");
	}
	else
	{
		printf("segundo\n");
	}
}

int main()
{
	int valor_produto = 0;
	int chute_primeiro = 0;
	int chute_segundo = 0;

	scanf("%i", &valor_produto);
	scanf("%i", &chute_primeiro);
	scanf("%i", &chute_segundo);

	resultado(valor_produto,chute_primeiro,chute_segundo);

}