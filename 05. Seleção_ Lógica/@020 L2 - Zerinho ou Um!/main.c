#include <stdio.h>

void zerin_um (int jog1 , int jog2 , int jog3)
{
	if ( (jog1 == jog2) && (jog2 == jog3) )
	{
		printf("empate\n");
	}
	else if ((jog1 == jog2) && (jog2 != jog3) )
	{
		printf("jog3\n");
	}
	else if ( (jog1 != jog2) && (jog1 == jog3) )
	{
		printf("jog2\n");
	}
	else
	{
		printf("jog1\n");
	}
}

int main()
{
	int jog1 = 0;
	int jog2 = 0;
	int jog3 = 0;

	scanf("%i", &jog1);
	scanf("%i", &jog2);
	scanf("%i", &jog3);

	zerin_um(jog1,jog2,jog3);

	return 0;
}