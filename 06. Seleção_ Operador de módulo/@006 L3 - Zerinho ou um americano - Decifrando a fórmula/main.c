#include <stdio.h>

void sum(int jog1, int jog2, int jog3, int jog4)
{
	int soma = jog1+ jog2 + jog3 + jog4;

	if( (soma % 4 == 0)  && (soma != 0) ) 
	{
		printf("jog4\n");
	}
	else if (soma % 4 == 3)
	{
		printf("jog3\n");
	}
	else if (soma % 4 == 2)
	{
		printf("jog2\n");
	}
	else if (soma % 4 == 1)
	{
		printf("jog1\n");
	}
	else
	{
		printf("nenhum\n");
	}	
}


int main()
{
	int  jog1, jog2, jog3 ,jog4;

	scanf("%i", &jog1);
	scanf("%i", &jog2);
	scanf("%i", &jog3);
	scanf("%i", &jog4);

	sum(jog1,jog2,jog3,jog4);

	return 0;
}