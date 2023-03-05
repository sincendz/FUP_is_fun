#include <stdio.h>

long int fibo(int a)
{
    long int p = 1;
    long int s = 1;
    long int fibo = 0;
    if (a > 2)
    {
        for (int i = 2; i < a; i++)
        {
            fibo = p + s;
            p = s;
            s = fibo;
        }
        return fibo;
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