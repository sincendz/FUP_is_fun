#include <stdio.h>


const char* campeao(char jog1,char jog2)
{
	if(jog1 == jog2)
	{
		return "empate";
	}

	else if (  ( (jog1 == 'R') && (jog2 == 'P') ) ||  ( (jog1 == 'P') && (jog2 == 'S') ) || ( (jog1 == 'S') && (jog2 == 'R') ) )
	{
		return "jog2";
	}

	else if( ( (jog1 == 'P') && (jog2 == 'R') ) ||  ( (jog1 == 'S') && (jog2 == 'P') ) || ( (jog1 == 'R') && (jog2 == 'S') ) )
	{
		return "jog1";
	}

	return "erro";
}

int main()
{
	char jog1,jog2;

	scanf(" %c", &jog1);
	scanf(" %c", &jog2);

	

	printf("%s\n",campeao(jog1,jog2) );

	return 0;
}