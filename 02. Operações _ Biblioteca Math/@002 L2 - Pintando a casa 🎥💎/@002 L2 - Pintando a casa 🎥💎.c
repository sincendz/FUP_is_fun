#include <stdio.h>
#include <math.h>

/**
 * Motivação
Fernando comprou uma casa triangular. Na hora de calcular a quantidade de tinta pra pintar,
 precisou descobrir como calcular a área de um triângulo. Deu de cara com a fórmula de Heron.

 *Ação
Utilize a seguinte fórmula para calcular a área de um triângulo a partir do tamanho de seus lados.

*/
int main()
{
    //Criação das Variaveis.
    float ladoA = 0;
    float ladoB = 0;
    float ladoC = 0;

    //Leitura das Variaveis
    printf("\n Digite o valor do lado A: ");
    scanf("%f",&ladoA);

    printf("\n Digite o valor do lado B: ");
    scanf("%f",&ladoB);

    printf("\n Digite o valor do lado C: ");
    scanf("%f",&ladoC);

    //Fórmula de Heron
    //Calculo do semi-perímentro.
    float semi_perimetro = 0;
    semi_perimetro = (ladoA + ladoB + ladoC)/2;

    //Calculo da Área.

    float area = 0;
    area =  sqrt(semi_perimetro*(semi_perimetro - ladoA)* (semi_perimetro-ladoB)* (semi_perimetro - ladoC));

    printf("%.2f", area);

    

    return 0;
}