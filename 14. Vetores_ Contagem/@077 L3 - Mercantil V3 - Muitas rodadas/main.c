#include <stdio.h>

const char* resultado(float valor[], float jog1[], char jog2[], int aux)
{
    int acrt_jog1 = 0;
    int acrt_jog2 = 0;


    for (int i = 0; i < aux; i++)
    {
        if (valor[i] == jog1[i])
        {
            acrt_jog1++;
        }
        else if ( (valor[1] < jog1[i]) && (jog2[i] == 'M'))
        {
            acrt_jog1++;
        }
        else
        {
            acrt_jog2++;
        }  
        
    }

    if (acrt_jog1 == acrt_jog2)
    {
        return "empate";
    }
    else if (acrt_jog1 > acrt_jog2)
    {
        return "primeiro";
    }
    
    
    return "segundo";

}

const char* array(int a)
{
    float array_valor_real[a];
    float array_jog1[a];
    char array_jog2[a];
    
    for (int i = 0; i < a; ++i)
    {
        scanf("%f", &array_valor_real[i]);
    }

    for (int i = 0; i < a; ++i)
    {
        scanf("%f", &array_jog1[i]);
    }

    for (int i = 0; i < a; ++i)
    {
        scanf(" %c", &array_jog2[i]);
    }
    
    return resultado(array_valor_real,array_jog1,array_jog2,a);

}

int main()
{
    int qnt_rodadas = 0;
    scanf("%i", &qnt_rodadas);

    printf("%s\n", array(qnt_rodadas));
    return 0;
}
