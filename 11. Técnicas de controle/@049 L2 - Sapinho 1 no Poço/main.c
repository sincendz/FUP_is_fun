#include <stdio.h>

void sapinho(int p, int s, int e)
{
    int ps = 0;
    int a = s;

    while (p > ps)
    {
        if(a >= p)
        {
            printf("%i saiu\n",ps);
            break;
        }
        else
            printf ("%i %i\n", ps, a);
        ps = a - e;
        a = ps + s;
    }
    
}

int main()
{
    
    int P,S,E;
    scanf("%i %i %i", &P, &S, &E);

    sapinho(P,S,E);

    return 0;
}
