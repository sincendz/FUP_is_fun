#include <stdio.h>

const char* resposta(int a)
{
	if (a == 4)
	{
		return "Super Fa";
	}
	else if (a == 3)
	{
		return "Fa";
	}
	else if (a == 2)
	{
		return "Interessado no assunto";
	}
	else if (a == 1)
	{
		return "Ja ouviu falar";
	}
	return "Nunca assistiu";
}

void corretas(char q1, char q2, char q3, char q4)
{
	int aux = 0;
	if (q1 == 'd')
	{
		++aux;
	}
	if (q2 == 'a')
	{
		++aux;
	}
	if (q3 == 'c')
	{
		++aux;
	}
	if (q4 == 'd')
	{
		++aux;
	}
	printf("%s\n",resposta(aux));
}

int main()
{
	char q1,q2,q3,q4;

	scanf(" %c", &q1);
	scanf(" %c", &q2);
	scanf(" %c", &q3);
	scanf(" %c", &q4);

	corretas(q1,q2,q3,q4);

	return 0;
}