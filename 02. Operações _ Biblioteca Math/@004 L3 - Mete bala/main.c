#include <stdio.h>
#include <math.h>

/**
 *   Motivação
 Um atirador de elite estava atirando a 400 metros de distância em em um papel milimetrado.
 Para calcular a imprecisão da arma, ele dava dois tiros e media a distância entre eles.
 Como ele não tinha régua, ele pegou os pontos no plano cartesiano e a fórmula da distância 
 entre os pontos.

 * Ação
 Dada a fórmula da distância entre dois pontos e os valores x e y de cada ponto, 
 imprima a distância entre os pontos com duas casas decimais.

 *Entrada:
 Coordenada X e coordenada Y do primeiro ponto.
 Coordenada X e coordenada Y do segundo ponto.
 *Saída:
 A distância entre os pontos com duas casas decimais.
 
*/

void distancia(float x1,float y1, float x2, float y2)
{
    float resultado = 0;
    resultado = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("%.2f\n", resultado);
}

int main()
{
    //Coordenada X e coordenada Y do primeiro ponto.
    //Coordenada X e coordenada Y do segundo ponto.
    float cordenada_primeiro_x = 0;
    float cordenada_primeiro_y = 0;
    float cordenada_segundo_x = 0;
    float cordenada_segundo_y = 0;

    printf("Digite o valor do primeiro X: ");
    scanf("%f", &cordenada_primeiro_x);

    printf("Cordenada do primeiro Y: ");
    scanf("%f", &cordenada_primeiro_y);

    printf("Digite o valor do segundo x: ");
    scanf("%f", &cordenada_segundo_x);

    printf("Digite o valor do segundo Y: ");
    scanf("%f", &cordenada_segundo_y);

    distancia(cordenada_primeiro_x,cordenada_primeiro_y, cordenada_segundo_x, cordenada_segundo_y);

    return 0;
}