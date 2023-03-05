#include <stdio.h>

const char* gincana (int valor)
{
    int array[valor];
    
    int lado1 = 0;
    int lado2 = 0;
    
    for(int i = 0 ; i < valor; i++)
    {
        scanf("%i", &array[i]);
        
        if( i < (valor/2) )
        {
            lado1 = lado1 + array[i];
        }
        else
        {
            lado2 = lado2 + array[i];
        }
    }
    
    if( lado1 > lado2)
    {
        return "Jedi";
    }
    else if(lado2 > lado1)
    {
        return "Sith";
    }
    
    return "Empate";
}

int main()
{
    int quanti;
    scanf("%i", &quanti);
    
    printf("%s\n", gincana(quanti));
}