#include <stdio.h>

int main()
{
    //Pedir a y b
    float v, r,i;
    scanf("%i",&v);
    scanf("%i",&r);
    if(r>0 && v!=0)
        i=v/r;
    else
        printf("No se puede");
    return i;
}
