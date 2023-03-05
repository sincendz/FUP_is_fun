#include <stdio.h>

void poder(char saque, int forca)
{
	if (saque == 'b')
	{
		if ( ((forca * 20) - 80) / 10 < 150 ) 
		{
			printf("Fraco, nem passou\n");
		}
		else if ( ((forca * 20) - 80) / 10 < 180 )
		{
			printf("Perfeito\n");
		}
		else if ( ((forca * 20) - 80) / 10 <= 210 )
		{
			printf("Satisfeito\n");
		}
		else
		{
			printf("Muito forte, bola fora\n");
		}

	}
	else
	{
		if ( ((forca * 18) - 80) / 10 < 150 ) 
		{
			printf("Fraco, nem passou\n");
		}
		else if ( ((forca * 18) - 80) / 10 < 180 )
		{
			printf("Perfeito\n");
		}
		else if ( ((forca * 18) - 80) / 10 <= 210 )
		{
			printf("Satisfeito\n");
		}
		else
		{
			printf("Muito forte, bola fora\n");
		}
	}
}

int main(void)
{
	
	char saque;
	int forca;

	scanf(" %c", &saque);
	scanf("%i", &forca);

	poder(saque, forca);

	return 0;
}