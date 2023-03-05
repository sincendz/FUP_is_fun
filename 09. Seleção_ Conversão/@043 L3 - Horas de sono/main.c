#include <stdio.h>

void horasdesono(int h1, int h2, int m1, int m2, int s1, int s2)
{
	int nh, nm, ns;
	int subh = 0;
	int subm = 0;
	//Segundo
	if (s2 > s1)
	{
		ns = s2 - s1;
	}
	else if (s2 < s1)
	{
		subm = 1;
		s2 = s2 + 60;
		ns = s2 - s1;
	}
	else
	{
		ns = 0;
	}

	// Minuto
	if (m2 > m1)
	{
		nm = m2 - m1 - subm;
	}
	else if ((m2 - subm) < m1)
	{
		subh = 1;
		m2 = m2 +60;
		nm = m2 - m1 - subm;
	}
	else
	{
		nm = 0;
	}
	//Hora

	if (h2 < h1)
	{
		nh = 24 - (h1-h2) - subh;
	}
	else if (h2 > h1 )
	{
		nh = h2 - h1 - subh;
	}
	else
	{
		nh = 0;
	}

	

	
	printf("%02d %02d %02d\n",nh,nm,ns );
}

int main()
{
	int hora1,minuto1,segundo1;
	int hora2,minuto2,segundo2;
	scanf("%d %d %d", &hora1, &minuto1, &segundo1);
	scanf("%d %d %d", &hora2, &minuto2, &segundo2);

	horasdesono(hora1,hora2,minuto1,minuto2,segundo1,segundo2);

	return 0;
}