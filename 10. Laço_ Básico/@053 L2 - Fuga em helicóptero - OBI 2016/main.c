#include <stdio.h>

void fuga(int heli, int cop, int fuga, int dir)
{
    if(dir == -1)                 
    {
        int aux = 0;

        while (aux == 0)
        {
            if( fuga == cop)
            {
                printf("N\n");
                aux = 1;
            } 
            else if ((fuga-1) < 0)
                fuga = 15;
            else if (fuga != heli)
                fuga--;
            else if(fuga == heli)
            {
               printf("S\n");
               aux = 1; 
            }   
        }        
    }
    else
    {
        int aux = 0;

        while (aux == 0)
        {
            if (fuga == cop)
            {
                printf("N\n");
                aux = 1;
            }
            else if (fuga == heli)
            {
                printf("S\n");
                aux = 1;
            }
            else if ((fuga+1)> 15)
                fuga = 0;
            else if (fuga != heli)
                fuga++;
            
        }
    }
}

int main()
{
	int H,P,F,D;

    scanf("%i", &H);
    scanf("%i", &P);
    scanf("%i", &F);
    scanf("%i", &D);

    fuga(H,P,F,D);

	return 0;
}