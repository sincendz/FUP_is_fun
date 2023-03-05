#include <stdio.h>
  
int main(void)
{
    int a = 0;
    int b = 0;

    scanf("%i",&a);
    scanf("%i",&b);

    int cont = 0;
    
    if(a == b)
    {
        cont++;    
    }

    while ( b > 0 )
    {
        if (b % 10 == a)
        {
            cont++; 
        }
        
       b = b / 10;
        
    }
    printf("%i\n", cont);

    return 0;
}