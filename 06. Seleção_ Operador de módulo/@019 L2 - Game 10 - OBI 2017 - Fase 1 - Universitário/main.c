#include <stdio.h>

void deslocamento(int num_pos, int pos_disco, int pos_aviao)
{
	if(pos_disco >= pos_aviao)
	{
		printf("%i\n", pos_disco - pos_aviao);
	}
	else
	{
		printf("%i\n", (num_pos - pos_aviao) + pos_disco );
	}
}

int main()
{
	int N,D,A;

	scanf("%i", &N);
	scanf("%i", &D);
	scanf("%i", &A);

	deslocamento(N,D,A);

	return 0;
}