#include <stdio.h>

void cabeca(int N, int X, int Y, char dire_cabeca, int S)
{
	//Direita
	if (dire_cabeca == 'R')
	{
		while(S > 0)
		{
			if( (X+1) > N)
			{
				X = 1;
			}

			else 
			{
				X++;
			}
			S--;
		}
		printf("%i %i\n",X, Y);
	}

	else if (dire_cabeca == 'L')
	{
		while(S > 0)
		{
			if((X-1) == 0)
			{
				X = N;
			}
			else 
			{
				X--;
			}
			S--;
		}
		printf("%i %i\n",X,Y);
	}

	else if (dire_cabeca == 'U')
	{
		while(S > 0)
		{
			if ((Y-1) == 0)
			{
				Y = N;
			}
			else
			{
				Y--;
			}

			S--;
		}
		printf("%i %i\n",X,Y);
	}
	else if (dire_cabeca == 'D')
	{
		while(S > 0)
		{
			if ((Y+1) > N)
			{
				Y = 1;
			}
			else
			{
				Y++;
			}

			S--;
		}
		printf("%i %i\n",X,Y);
	}

}

int main(void)
{
	int N,X,Y,S;
	char C;

	scanf("%i", &N);
	scanf("%i", &X);
	scanf("%i", &Y);
	scanf(" %c", &C);
	scanf("%i", &S);

	cabeca(N,X,Y,C,S);

	return 0;
}