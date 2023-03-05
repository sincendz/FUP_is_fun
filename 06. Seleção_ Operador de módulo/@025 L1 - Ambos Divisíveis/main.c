#include <stdio.h>

const char* divisibilidade(int a, int b)
{
	if( (a%5 == 0 && b%5 ==0) || (a%3 == 0 && b%3 ==0)  )
	{
		return "sim";
	}

	return "nao";
}

int main()
{
	int num_1,num_2;

	scanf("%i", &num_1);
	scanf("%i", &num_2);

	printf("%s\n", divisibilidade(num_1,num_2)); 

	return 0;
}