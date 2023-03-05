#include <stdio.h>

int valor_minimo(int p, int e)
{
    int S = 1;                         //Salto Do Sapinho
    int ps = 0;                         //Posição do Sapinho dentro do Poço
    int a = S;                         //Aterrissagem do Sapinho
    int soma_10 = 1;
    int boleano = 0;
    while (boleano == 0)
    {
        ps = a - e;
        a = ps + (S - (10 * soma_10) );
        soma_10++;
        
        if (ps <=0)
        {
            S++;
            ps = 0;
            a = S;
            soma_10 = 1;
        }
        else if ( a >= p)
        {
            return S;
            boleano= 1;
        }
        
    }
    return 001;               
}

int main()
{
    int P,E;
    scanf("%i %i", &P ,&E);

    printf("%i\n", valor_minimo(P,E));

    return 0;
}
