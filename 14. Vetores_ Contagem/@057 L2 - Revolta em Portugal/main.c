#include <stdio.h>

char* revolta(int a)
{
    int array[a];
    
    int soldados = 0;
    int rebeldes = 0;
    
    for(int i = 0; i < a; i++)
    {
        scanf("%i", &array[i]);
        
        if(array[i] % 2 == 0)
        {
            rebeldes = rebeldes + array[i];
        }
        else
        {
            soldados = soldados + array[i];
        }
    }
    
    if(soldados > rebeldes)
    {
        return "soldados";
    }
    else if(rebeldes > soldados)
    {
        return "rebeldes";
    }
    
    return "empate";
}

int main()
{
    int tam;
    scanf("%i", &tam);
    
    printf("%s\n", revolta(tam));
    return 0;
}