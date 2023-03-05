#include <stdio.h>

void vencedor(float c_1, char e_2,float vr)
{
	//Caso o chute do primeiro seja igual ao valor do produto, o primeiro ganha
	if (c_1 == vr)
	{
		printf("primeiro\n");
		
	}

	else if(c_1 > vr)
	{
		if(e_2 == 'm'){
			printf("segundo\n");
		}
		else 
		{
			printf("primeiro\n");
		}
	}
	else if ( c_1 < vr)
	{
		if(e_2 == 'M')
		{
			printf("segundo\n");
		}
		else
		{
			printf("primeiro\n");
		}
	}

	
	
}

int main()
{
	float chute_primeiro;
	char escolha_segundo;
	float valor_real;

	scanf("%f", &chute_primeiro);
	scanf(" %c", &escolha_segundo);
	scanf("%f", &valor_real);

	vencedor(chute_primeiro,escolha_segundo,valor_real);

	return 0;
}
