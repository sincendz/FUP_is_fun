#include <stdio.h>

void media(float ap1, float ap2 , float ap3, float tra)
{
	float menor = (ap1 < ap2) ? ap1 : ap2;
	menor = (menor > ap3) ? ap3 : menor;

	float med = ap1 + ap2 + ap3 - menor;

	med = (med + tra)/3;

	if (med >= 7)
	{
		printf("Aprovado com %.1f\n", med );
	}
	else
	{
		printf("Final com %.1f\n",med );
	}

}

int main(void)
{
	float AP1,AP2,AP3,Trabalho;

	scanf("%f", &AP1);
	scanf("%f", &AP2);
	scanf("%f", &AP3);
	scanf("%f", &Trabalho);

	media(AP1,AP2,AP3,Trabalho);

	return 0;
}