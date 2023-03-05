#include <stdio.h>

void sapinho2(int p, int s, int e)
{
    int cont = 1;
    int ps = 0;
    int A = s;
    int aux = 0;

    while (aux == 0)
    {
        printf("%i %i\n", ps,A);

        ps = A-e;
        A = ps + (s- (10 * cont) );  
        ++cont;
        if(A >= p)
        {
            printf("%i saiu\n", ps);
            break;
        }
        else if (ps < 0 )
        {
            printf("%i morreu\n", ps);
            break;
        }
        else if (A < 0)
        {
            A = 0;
        }
        
    }
}

int main()
{
    int P,S,E;
    scanf("%i %i %i", &P, &S, &E);

    sapinho2(P,S,E);
    return 0;
}
