#include <stdio.h>

int main()
{
    const float Pi=3.1416;
    float r, res;
    printf(" \n Dame el radio: ");
    scanf("%f",&r);
    res=Pi*pow(r,2);
    printf("El valor de Area es %.3f",res);
    return 0;
}
