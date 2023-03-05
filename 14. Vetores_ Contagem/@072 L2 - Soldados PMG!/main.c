#include <stdio.h>

//Função Media
double media(double vet[], int qtd)
{  
    double total = 0;
    
    for(int i = 0; i < qtd; i++)
    {
        total = total + vet[i];
    }
    
    return total/qtd;
} 

int main()
{
    int qtd;
    
    scanf("%i", &qtd);
    
    double array[qtd];
    
    for(int i = 0 ; i < qtd; i++)
    {
        scanf("%lf", &array[i]);
    }
    

    double md = media(array,qtd);

    printf("%.2f\n", md );

    for (int i = 0; i < qtd; ++i)
    {
        if(i > 0 && i < qtd )
        {
            printf(" ");
        }
        if (array[i] > md)
        {
            printf("G");
        }
        else if (array[i] == md)
        {
            printf("M");
        }
        else
        {
            printf("P");
        }
    }
    printf("\n");
    return 0;
}
