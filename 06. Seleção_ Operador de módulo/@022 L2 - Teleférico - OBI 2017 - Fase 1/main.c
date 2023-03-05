#include <stdio.h>

int  qnt_voltas(int capacidade_cabine, int total_alunos)
{
	int aux = 1;
	while( total_alunos   > (capacidade_cabine - 1 )  )
	{	
		++aux;
		total_alunos = total_alunos - (capacidade_cabine - 1);
	}
	return aux;
}

int main()
{
	int capacidade_cabine, total_alunos;
	scanf("%i", &capacidade_cabine);
	scanf("%i", &total_alunos);

	printf("%i\n", qnt_voltas(capacidade_cabine,total_alunos));

	return 0;
}