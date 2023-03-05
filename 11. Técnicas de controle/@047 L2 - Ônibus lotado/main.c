#include <stdio.h>

int main(void)
{
    int capacidade = 0;
    int m = 0;

    scanf("%i", &capacidade);

    while ( m <= (capacidade * 2))
    {
        int mp = m;
        scanf("%i", &m);
        m = mp + m;
        if (m == 0)
            printf("vazio\n");

        else if ( m >= (capacidade * 2) )
        {
            printf("hora de partir\n");
            break;
        }
        else if(m < capacidade)
            printf("ainda cabe\n");
        else
            printf("lotado\n");
        
        
    }
    

    return 0;
}
