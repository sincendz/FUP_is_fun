#include <stdio.h>

void jokenpo (int jog1, int jog2)
{
	if(jog1 == jog2)
	{
		printf("Empate\n");
	}

	else if( (jog1 +7) <= 15 )
	{
		if(jog1 < jog2 && (jog1 +7) > jog2)
		{
			printf("Jogador 1\n");
		}
		else
		{
			printf("Jogador 2\n");
		}
	}

	else if( ( (jog1 +7) > jog2)  && ( (jog1 +7) % 15) >= jog2)
	{
		printf("Jogador 1\n");
	}
	else
	{
		printf("Jogador 2\n");
	}
}

int main()
{
	int jog1, jog2;

	scanf("%i", &jog1);
	scanf("%i", &jog2);

	jokenpo(jog1,jog2);

	return 0;
}