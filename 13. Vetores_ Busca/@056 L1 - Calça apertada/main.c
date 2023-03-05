#include <stdio.h>
  
int main(void)
{
    int procurar,vet;

    scanf("%i %i", &procurar,&vet);

    int array[vet];
    
    int cont = 0;

    for (int i = 0; i < vet; i++)
    {
        scanf("%i", &array[i]);
        
        if(array[i] == procurar)
        {
            cont++;
        }
    }
    
    printf("%i\n", cont);
    

    return 0;
}