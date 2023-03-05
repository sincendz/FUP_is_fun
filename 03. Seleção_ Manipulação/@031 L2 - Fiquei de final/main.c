/**
 * Entrada
 3 notas: nota1, nota2 e nota_final, uma por linha
 Saída
 aprovado, reprovado, aprovado na final ou reprovado na final
 Obs: descarte a nota da final se ela não for necessária.
*/

#include <stdio.h>

void media(int a, int b)
{
    int media1 = (a+b)/2;
    if(media1 >= 7)
    {
        printf("aprovado\n");
    }
    else if(media1 >= 4 && media1 <7)
    {
        int nota_final = 0;
        printf("Digite a nota final: ");
        scanf("%i", &nota_final);

        int mediafinal = (nota_final + media1)/2;

        if(mediafinal >= 5)
        {
            printf("Aprovado na final.\n");
        }
        else
        {
            printf("reprovado na final\n");
        }

    }
    else
    {
       printf("reprovado\n"); 
    }
}

int main()
{
    int primeira_nota = 0;
    int segunda_nota = 0;

    printf("Digite a primeira nota: ");
    scanf("%i" , &primeira_nota);

    printf("Digite a segunda nota: ");
    scanf("%i", &segunda_nota);

    media(primeira_nota,segunda_nota);

    return 0;
}