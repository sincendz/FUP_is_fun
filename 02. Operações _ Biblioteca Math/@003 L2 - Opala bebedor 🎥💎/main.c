#include <stdio.h>
#include <math.h>

/**
 * Ação
 Um amigo lhe deu a velocidade média do carro dele em km/h, o tempo da viagem em minutos e o consumo de um
 carro em litros e pediu que você faça um programa que calcule o desempenho do motor em km por litro.

 *Dica:
 O tempo em hora eh tempo em minutos/60
 A distancia percorrida é velocidade vezes tempo em horas
 O desempenho é distancia / consumo.

 *Entrada
 Velocidade em km/h
 Tempo em minutos
 Consumo em litros
 *Saída

 Desempenho com duas cadas decimais.

*/

int main()
{
    /**
    Entrada
    Velocidade em km/h
    Tempo em minutos
    Consumo em litros
    */
    
    float velocidade = 0;
    float tempo = 0;
    float consumo_litros = 0;

    printf("\tVelocidade: ");
    scanf("%f", &velocidade);

    printf("\t Tempo: ");
    scanf("%f", &tempo);

    printf("\t Consumo: ");
    scanf("%f", &consumo_litros);

    //Transformar o tempo em minutos para horas.
    tempo = tempo/60;

    float distancia_percorrida = 0; 
    distancia_percorrida = velocidade * tempo;

    float desempenho = 0;
    desempenho = distancia_percorrida/ consumo_litros;

    printf("%.2f\n", desempenho);

    return 0;
}