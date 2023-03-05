#include <stdio.h>

void proximo_segundo(int h, int m, int s)
{
	if (( s +1) < 60)
	{
		s++;
	}
	else
	{
		s = 00;
		if( (m+1) < 60)
		{
			m++;
		}
		else
		{
			m =00;
			if (h+1 < 24)
			{
				h++;
			}
			else
			{
				h = 00;
			}
		}

	}


	printf("%02d %02d %02d\n",h,m,s );
}

int main(void)
{
	int hora,minuto,segundo;

	scanf("%d", &hora);
	scanf("%d", &minuto);
	scanf("%d", &segundo);

	proximo_segundo(hora,minuto,segundo);

	return 0;
}