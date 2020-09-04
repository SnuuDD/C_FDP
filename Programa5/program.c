#include <stdio.h>

int main()
{
    //Pedir a y b
    int a, b;
    scanf("%i",&a);
    scanf("%i",&b);
    if(a>b && a!=b)
        printf("%i es mayor",a);
    else
        printf("%i es mayor",b);
    return 0;
}
