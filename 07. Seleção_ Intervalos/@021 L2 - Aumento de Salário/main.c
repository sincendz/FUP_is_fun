#include <stdio.h>

void aumento(float salario)
{
	if(salario <= 1000)
	{
		printf("%.2f\n",salario + (salario *0.2));
	}
	else if(salario <= 1500)
	{
		printf("%.2f\n",salario + (salario *0.15));
	}
	else if (salario <= 2000)
	{
		printf("%.2f\n",salario + (salario *0.1));
	}
	else
	{
		printf("%.2f\n",salario + (salario *0.05));
	}
}

int main(void)
{
	float salario = 0;
	scanf("%f", &salario);

	aumento(salario);

	return 0;
}