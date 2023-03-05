#include <stdio.h>

/**
 * Motivação
 Os administradores da Fazenda Fartura planejam criar uma nova plantação 
 de morangos, no formato retangular. Eles têm vários locais possíveis para
 a nova plantação, com diferentes dimensões de comprimento e largura. Para 
 os administradores, o melhor local é aquele que tem a maior área. Eles 
 gostariam de ter um programa de computador que, dadas as dimensões de dois
 locais, determina o que tem maior área. Você pode ajudá-los?
 
 * Entrada
 A entrada contém quatro linhas, cada uma contendo um número inteiro. 
 As duas primeiras linhas indicam as dimensões (comprimento e largura) de um 
 dos possíveis locais. As duas últimas linhas indicam as dimensões 
 (comprimento e largura) de um outro possível local para a plantação de 
 morangos. As dimensões são dadas em metros.
 * Saída
 Seu programa deve escrever uma linha contendo um único inteiro, a área, 
 em metros quadrados, do melhor local para a plantação, entre os dois locais
  dados na entrada.
 * Restrições
 1 ≤ comprimento ≤ 100
 1 ≤ largura ≤ 100
 link: https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=40254
*/

void area(int c1, int l1, int c2, int l2)
{
    if(  ((c1 >= 1) && (c1 <= 100)) && ((l1 >= 1) && (l1 <= 100)) && ((c2 >= 1) && (c2 <= 100)) && ((l2 >= 1) && (l2 <= 100))  )
    {
        int area_1 = c1 * l1;
        int area_2 = c2 * l2;
        if(area_1>area_2)
        {
            printf("%i\n", area_1);
        }
        else
        {
            printf("%i\n", area_2);
        }
    }
    else
    {
        printf("Fora das Restrições\n");
    }
}

int main()
{
    int primeiro_comprimento = 0; 
    int primeiro_largura = 0;
    int segundo_comprimento = 0;
    int segundo_largura = 0;

    printf("Comprimento do primeiro: ");
    scanf("%i", &primeiro_comprimento);

    printf("Largura do primeiro: ");
    scanf("%i", &primeiro_largura);

    printf("Comprimento do segundo: ");
    scanf("%i", &segundo_comprimento);

    printf("Largura do segundo: ");
    scanf("%i", &segundo_largura);

    area(primeiro_comprimento,primeiro_largura,segundo_comprimento,segundo_largura);

    return 0;
}