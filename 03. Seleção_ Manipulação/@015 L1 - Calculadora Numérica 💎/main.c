#include <stdio.h>

/**
 * Motivação
Quem nunca numa prova de matemática ou física no ensino médio escutou um 
coleguinha dizer: “Professor, pode usar a calculadora?” que atire a primeira pedra.
 
 *Ação
 Leia dois números inteiros e um símbolo e imprima o resultado.
 
 *Entrada:
 Leia do usuário dois valores inteiros e um operador em caractere (‘+’, ‘-’, ‘*’ ou ‘/’)
 *Saída:
 Imprima o resultado da operação em inteiro. Nunca haverá divisão por 0.
*/

void operacao(int a, int b , char c)
{
    if( c == '+')
    {
        printf("%i\n",a+b);
    }
    else if( c == '-')
    {
        printf("%i\n",a-b);
    }
    else if( c == '*')
    {
        printf("%i\n",a*b);
    }
    else if( c == '/')
    {
        if(b != 0)
        {
            printf("%i\n",a/b);
        }
        else
        {
            printf("indeterminado.\n");
        }
    }
    else
    {
        printf("operação invalida.\n");
    }
}

int main()
{
    int valorA = 0;
    int valorB = 0;
    char operador = 0;
    printf("Digite o valor de a: ");
    scanf("%i", &valorA);

    printf("Digite  o valor de B: ");
    scanf("%i", &valorB);

    printf("Digite o Operador: ");
    scanf(" %c", &operador);

    operacao(valorA,valorB,operador);

    return 0;

}