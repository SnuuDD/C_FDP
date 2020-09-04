#include <stdio.h>
int main()
{
    float a, b, aux;
    const float p=3.141592;
   // printf("Dame el valor del radio: ");
    scanf("%f",&a);
   // printf("Dame el valor de altura: ");
    scanf("%f",&b);

    aux=((1/3.0)*p*a*a*b);
    printf("\n");
    printf("%.3f",aux);

    return(0);
}
