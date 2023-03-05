#include <stdio.h>

long int fibo(int a)
{
    long int p = 1;
    long int s = 1;
    long int fibo = 0;
    int quanti = 0;
    if (a > 1)
    {
        for (int i = 1; i < 4000000; i++)
        {
            fibo = p + s;
            p = s;
            s = fibo;
            if (fibo < a)
            {
                if (fibo % 2 == 0)
                {
                    quanti = quanti + fibo;
                }
                
            }
            else
            {
                break;
            }
            
        }
        return quanti;
    }

    return 1;
    
}
  
int main(void)
{
    int num = 0;
    scanf("%i", &num);

    printf("%li\n", fibo(num));

    return 0;
}