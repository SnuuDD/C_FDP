#include <stdio.h>
int main()
{
    float a, b, c, aux;
   // printf("Dame el valor de A: ");
    scanf("%f",&a);
   // printf("Dame el valor de B: ");
    scanf("%f",&b);
   // printf("Dame el valor de C: ");
    scanf("%f",&c);

    aux=a/b;
    printf("\n");
    printf("%.3f",aux);

    aux=(int)a%(int)b;
    printf("\n");
    printf("%i",(int)aux);

    aux=a / b - c;
    printf("\n");
    printf("%.3f",aux);

    aux=a/(b - c);
    printf("\n");
    printf("%.3f",aux);

    return(0);
}
