#include <stdio.h>

int main()
{
    float v,d,t;
    printf("Dame la distancia: ");
    scanf("%f",&d);
    printf(" \n Dame el tiempo: ");
    scanf("%f",&t);
    v=d/t;
    printf("El valor de Velocidad es %.2f",v);
    return 0;
}
