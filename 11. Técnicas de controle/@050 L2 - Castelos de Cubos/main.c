#include <stdio.h>

const char* eh_quadrado_perfeito(int a)
{
    int i = 1;
    while (i <= a)
    {
        if ( (i*i) == a){
            return "sim";
            break;
        }
        i++;
    }
    return "nao";
    
}

int main()
{
    int num;
    scanf("%i", &num);

    printf("%s\n", eh_quadrado_perfeito(num));

    return 0;
}
