#include <stdio.h>

void hora(int hora,int min, char sent, int dist)
{
	//OK
	if(sent == 'H')
	{
		while(dist > 0)	
		{
			if(dist % 6 == 0)
			{
				if(hora >= 12)
				{
					hora = 00;
					hora++;
				}
				else
					hora ++;
				dist = dist - 6;
			}
			else
			{
				min = min + ((dist% 6)*10);
				dist = dist - (dist% 6);
			}
			
		}
		printf("%02d %02d\n", hora,min);
	}


	else
	{
		while(dist > 0)
		{
			//Certo
			if(dist % 6 == 0)
			{
				if (hora == 0)
				{
					hora = 11;
				}
				else
					hora--;
				dist = dist - 6;
			}
			else
			{
				if( min - ( (dist % 6) * 10 ) )
				{
					if (hora == 0 && ( (min - ( (dist % 6) * 10 ) ) < 0))
					{
						hora = 11;
						min = (60 + min ) - ( (dist % 6) * 10 );
						dist = dist - (dist % 6);
					}
					else
					{
						if( (min - ( (dist % 6) * 10 ) ) < 0)
						{
							hora --;
							min = 60 -( (dist % 6) * 10 );
							dist = dist - (dist % 6);
						}
						else
						{
							min = min - ( (dist % 6) * 10);
							dist = dist - (dist % 6);
						}
					}
				}	
			}
		}
		printf("%02d %02d\n", hora,min);
	}	
}

int main()
{
	int H,M,D;
	char S;

	scanf("%d", &H);	
	scanf("%d", &M);	
	scanf(" %c", &S);
	scanf("%d", &D);

	hora(H,M,S,D);

	return 0;
}