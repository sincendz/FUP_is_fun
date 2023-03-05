#include <stdio.h>

int voltas(int CC, int bananas, int goiabas, int mangas)
{
    int total = bananas + goiabas + mangas;
    int tempo = 0;
    while(total > 0)
    {
        tempo++;
        total = total - CC;
    }

    return tempo;
}

int main()
{
    int capacidade_cesta, qnt_bananas, qnt_goiabas, qnt_mangas;

    scanf("%i", &capacidade_cesta);
    scanf("%i", &qnt_bananas);
    scanf("%i", &qnt_goiabas);
    scanf("%i", &qnt_mangas);

    printf("%i\n", voltas(capacidade_cesta,qnt_bananas,qnt_goiabas,qnt_mangas) );

    return 0;
}
