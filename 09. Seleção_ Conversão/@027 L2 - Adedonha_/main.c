#include <stdio.h>

void adedonha(int a)
{
	if (a == 0)	
	{
		printf("joguem de novo\n");
	}
	else if (a <= 26)
	{
		printf("%c\n", 'a'+(a-1));
	}
	else
		adedonha(a-26);
}

int main()
{
	int soma;
	scanf("%i", &soma);

	adedonha(soma);

	return 0;
}