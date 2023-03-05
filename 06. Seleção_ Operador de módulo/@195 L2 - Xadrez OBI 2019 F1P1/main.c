#include <stdio.h>

int blc_whi(int Linha, int Coluna)
{
	if( Linha == Coluna )
	{
		return 1;
	}
	else if ( ( (Linha % 2 == 0) && (Coluna %2 != 0) ) || (Linha % 2 != 0) && (Coluna %2 == 0)  )
	{
		return 0;
	}
	else if( ( (Linha % 2 != 0) && (Coluna %2 != 0) ) ||( (Linha % 2 == 0) && (Coluna %2 == 0) ) )
	{
		return 1;
	}

	return 4;
}

int main()
{
	int L,C;

	scanf("%i", &L);
	scanf("%i", &C);

	printf("%i\n", blc_whi(L,C));

	return 0;
}