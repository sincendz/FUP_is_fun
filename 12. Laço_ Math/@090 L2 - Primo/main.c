#include <stdio.h>

int eh_primo(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
            break;
        }
        
    }
    return 1;
    
}
  
int main(void)
{
    int n;
    scanf("%i", &n);

    printf("%i\n",eh_primo(n));

    return 0;
}