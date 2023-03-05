/**
 * Motivação
 Um funcionário trabalha de segunda a sexta, de 8 até 11:59 e de 14 até 17:59. 
 Às 17:59 é pra ele ainda estar trabalhando! No sábado ele trabalha apenas de 8 até 11:59.
 
 O chefe cansou de tentar decorar isso tudo e deu 15 contos pra você fazer um código que 
 lê o dia da semana, a hora e o minuto e informa ao chefe se ainda é pro funcionário estar 
 trabalhando!
 
 [DS]
 
 *Entrada
 É formada por um dia inteiro representando o dia (1 = DOM, 2 = SEG, 3 = TER, 4 = QUA, 
 5 =QUI, 6 = SEX, 7 = SAB) e mais dois inteiros representando hora e minuto, um por linha.
 *Saída
 Deve ser SIM se ele deve estar trabalhando ou NAO se ele não deve estar trabalhando.
*/

#include <stdio.h>

void esta_trabalhando(int d, int h , int m)
{
    if( d!= 1)
    {
        //printf("DIA SIM\n");
        if( (d!= 7) && ( ( (h >= 8 && h <= 11) || (h >= 14 && h <= 17 )) && ( m >= 00 && m<= 59)))
        {
            printf("SIM\n");
        }

        else if(d == 7)
        {
            if((h >= 8 && h <= 11) && ( m >=00 && m<= 59))
            {
               printf("SIM\n"); 
            }
            else
            {
              printf("NAO\n");  
            }
        }
        else
        {
            printf("NAO\n"); 
        }
    }

    else
    {
        printf("NAO\n");
    }
}

int main()
{
    int dia = 0;
    int hora = 0;
    int minuto = 0;

    printf("Digite o valor do dia: ");
    scanf("%d", &dia);

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &minuto);

    esta_trabalhando(dia,hora,minuto);

}