#include <stdio.h>
#include <math.h>

/**
 * Aluízio quer comprar uma televisão parcelada. Ele tem X reais por mês disponíveis para pagar a televisão. No parcelamento,
 * quanto mais parcelas, maior o juros que usa a seguinte regra.

 1 vez sem juros
 2 vezes com juros de 5%
 3 vezes com juros de 10%
 4 vezes com juros de 15%
 5 vezes com juros de 20%
 6 vezes com juros de 25%
 7 vezes com juros de 30%
 8 vezes com juros de 35%
 9 vezes com juros de 40%
 10 vezes com juros de 45%
 Dado o valor da televisão e a quantidade de parcelas, um por linha, calcule o valor da parcela e o valor total que Aluízio vai pagar
*/

void valor(float tele,int parc)
{
    int juros = 0;
    if(parc == 1)
    {
        printf("%.2f\n", tele);
        printf("%.2f\n", tele);
    }
    else
    {
        for (int i = 1; i < parc; i++)
        {
            juros = juros + 5;
        }
        float pagar = 0;
        pagar = (tele * juros)/100;
        printf("%.2f\n", (tele+pagar)/parc);
        printf("%.2f\n", tele+pagar);
    }
}

int main()
{

    float valor_televisao = 0;
    float quantidade_parcelas = 0;

    printf("Valor da televisão: ");
    scanf("%f",&valor_televisao);

    printf("Quantidade de Parcelas: ");
    scanf("%f", &quantidade_parcelas);

    valor(valor_televisao,quantidade_parcelas);

    return 0;
}