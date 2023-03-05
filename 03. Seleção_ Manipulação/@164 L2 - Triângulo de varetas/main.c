/*
 *Você pegou no chão de casa 3 varetas de tamanhos distintos e tentou formar um triângulo com
 essas varetas.
 
 Para formar um triângulo, nenhuma das varetas pode ser maior que a soma das outras duas.
 
 Leia o tamanho das 3 varetas e informe se é possível formar o triângulo.
*/

#include <stdio.h>

void triangulo(int a, int b, int c)
{
    int eh = 0;

    if((a+b)> c)
        eh++;
    if((b+c)> a)
        eh++;
    if((c+a) > b)
        eh++;
    if(eh == 3)
        printf("true\n");
    else
        printf("false\n");
}

int main()
{
    int vareta_a = 0;
    int vareta_b = 0;
    int vareta_c = 0;

    scanf("%i", &vareta_a);
    scanf("%i", &vareta_b);
    scanf("%i", &vareta_c);

    triangulo(vareta_a,vareta_b,vareta_c);
    return 0;
}