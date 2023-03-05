#include <stdio.h>

void iguais(int num1, int num2, int num3)
{

	if( (num1 == num2) && (num2 == num3))
	{
		printf("3\n");
	}

	else if( ( (num1 == num2) && (num2 != num3) ) || ( (num1 != num2) && (num2 == num3) )|| ( (num1 == num3) && (num3 != num2) ))
	{
		printf("2\n");
	}
	else if((num1 != num2) && (num2 != num3))
	{
		printf("0\n");
	}
	else
	{
		printf("1\n");
	}



}

int main()
{
	int numero_1, numero_2 , numero_3 ;
	scanf("%i", &numero_1);
	scanf("%i", &numero_2);
	scanf("%i", &numero_3);

	iguais(numero_1, numero_2 , numero_3);

	return 0;
}