#include <stdio.h>

int primos(int n)
{
    int aux = n;

    for (int i = 2; i < aux; i++)
    {
        if (aux % i == 0)
        {
            aux++;
            i = 2;
        }
        
    }

    return aux;
    
}

void fatorado(int n)
{
    int qnt_div = 0;       //Quantidade de divisões
    int fator = 2;         //Primeiro fatorando
    int boo = 0;

    while ( boo == 0)
    {
        if (n == 1)
        {
            break;
        }
        
        while (n % fator == 0 )
        {
            n = n / fator;
            qnt_div++;
        }
        if (qnt_div != 0)
        {
            printf("%i %i\n",fator,qnt_div);
        }
        

        fator = primos(fator+1);
        qnt_div = 0;
        
        
    }
    

}

  
int main(void)
{
    int n;
    scanf("%i", &n);

    fatorado(n);

    return 0;
}