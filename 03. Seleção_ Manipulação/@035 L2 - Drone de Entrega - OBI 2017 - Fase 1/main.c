/**Motivação
 A loja do Pará, especializada em vendas pela internet, está desenvolvendo drones para entrega de 
 caixas com as compras dos clientes. Cada caixa tem a forma de um paralelepípedo reto retângulo 
 (ou seja, no formato de um tijolo).
 
 O drone entregará uma caixa de cada vez, e colocará a caixa diretamente dentro da casa do cliente, 
 através de uma janela. Todas as janelas dos clientes têm o formato retangular e estão sempre totalmente 
 abertas. O drone tem um aplicativo de visão computacional que calcula exatamente as dimensões H e L da 
 janela. O drone consegue colocar a caixa através da janela somente quando uma das faces da caixa está 
 paralela à janela, mas consegue virar e rotacionar a caixa antes de passá-la pela janela.
 
 O aplicativo de controle do drone está quase pronto, mas falta um pequeno detalhe: um programa que, 
 dadas as dimensões da maior janela do cliente e as dimensões da caixa que deve ser entregue, determine 
 se o drone vai ser capaz de entregar a compra (pela janela) ou se a compra terá que ser entregue por 
 meios normais.
 
 * Entrada
 A entrada é composta por cinco linhas, cada uma contendo um número inteiro. A três primeiras linhas 
 contêm os valores A, B, C, indicando as três dimensões da caixa, em centímetros. As duas últimas 
 linhas contêm os valores H e L, indicando a altura e a largura da janela, em centímetros.
 * Saída
 Seu programa deve escrever uma única linha, contendo apenas a letra S se a caixa passa pela janela e 
 apenas a letra N em caso contrário.
 Restrições
 1 ≤ A, B, C ≤ 100
 1 ≤ H, L ≤ 100
 */

#include <stdio.h>

void passa(int a, int b, int c, int h,int l)
{
    int ph = 0;
    int pl = 0;
    
    if(h >= a)
        ph++;
    if(h >= b)
        ph++;
    if(h >= c)
        ph++;
    if(l >= a)
        pl++;
    if(l >= b)
        pl++;
    if(l >= c)
        pl++;

    printf("%i\t",ph);
    printf("%i\t",pl);

    if(ph >= 1 && pl >=1)
        printf("\nS\n");
    else
        printf("\nN\n");

}

int main()
{
    int A = 0,B = 0,C = 0,H = 0,L = 0;
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &H);
    scanf("%i", &L);

    passa(A,B,C,H,L);

    return 0;
}