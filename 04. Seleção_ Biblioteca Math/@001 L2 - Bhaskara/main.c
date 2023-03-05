/**
 * Motivação
Não sei se você amava ou odiava o tal do Bhaskara por inventar aquela fórmula das raízes. 
Agora é hora de implementar aquela conta pra nunca ter mais que fazer na mão.

Ação
Dados os valores de A, B e C, calcule as raízes.

Entrada:
Valores de A, B e C em ponto flutuante, um por linha.
Saída:
Caso delta seja positivo, a saída deve ser a raiz positiva e raiz negativa, com duas casas decimais, uma raiz por linha.
Caso delta seja igual a zero, uma única raiz deve ser considerada, com duas casas decimais.
Caso delta sela negativo, a saída deve ser “nao ha raiz real”
*/

#include <stdio.h>
#include <math.h>

void Bhaskara(float a, float b, float c)
{
    float delta = 0;
    delta = (pow(b,2)) - (4*a*c);
    //printf("\n\t%f", delta);

    if(delta > 0)
    {
        //printf("duas raizes\n");

        float x1 = 0;
        float x2 = 0;

        x1 = (-b +sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("%.2f\n", x1);
        printf("%.2f\n", x2);
    }
    else if(delta == 0)
    {
        //printf("um raiz\n");

        float x1 = 0;
        x1 = (-b +sqrt(delta))/(2*a);
        
        printf("%.2f\n", x1);
    }
    else
    {
        printf("nao ha raiz real\n");
    }
}

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    Bhaskara(a,b,c);
}