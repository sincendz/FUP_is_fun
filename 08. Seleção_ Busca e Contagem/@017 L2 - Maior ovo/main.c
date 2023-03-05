#include <stdio.h>

int maior_ovo(int a, int b, int c, int d)
{
    int maior = a;

    if(maior < b)
        maior = b;
    if (maior < c)
        maior = c;
    if (maior < d)
        maior = d; 

    return maior;
}

int main(void)
{
    int a,b,c,d;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);

    printf("%i\n", maior_ovo(a,b,c,d) );

    return 0;
}
