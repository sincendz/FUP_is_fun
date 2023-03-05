#include <stdio.h>
#include <string.h>

/*
    Retorna a quantidade de rodadas
    Ex:121
    A quantidade de rodadas será 2, pois ele terá que comparar 1 com 1 e dps o 2 com ele mesmo
    Ex:3443
    Quantidade tbm será 2. 
*/

int rodadas(int cont)
{
    int rodadas = 0;

    if(cont % 2 == 0)
    {
        rodadas = cont / 2;
    } 
    else
    {
        rodadas = (cont / 2) + 1;
    } 

    return rodadas;
}

/*
    retorna a quantidade de números 
    Ex: 121
    cont = 3
*/
int quantidade_num(int id)
{
    int cont = 0;
    while(id > 0)
    {
        cont++;
        id = id/10;
    }
    return cont;
}

int main(void)
{
    int id;
    scanf("%i",&id);
    
    int cont = quantidade_num(id);
    
    int array[cont];
    
    
    for(int i = cont -1 ; i >= 0 ; i--)
    {
        array[i] = id % 10;
        id = id/10;
    }
    
    
    int aux = rodadas(cont);

    
    int start = 0;
    int end = cont - 1;

    int igual = 1;

    while (aux > 0)
    {
        if(array[start] != array[end])
        {
            igual = 0;
            break;
        }

        start++;
        end--;
        aux--;
    }

    printf("%i\n", igual);
    
    
    return 0;
}