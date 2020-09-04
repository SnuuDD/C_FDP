#include <stdio.h>

int main()
{
    int n, cont, res;
    cont=0;
    res=0;
    printf("Dame N: ");
    scanf("%i",&n);
    if(n>0)
{
        do
        {
            res=res+cont;
            cont=cont+2;
        }
        while (cont<n+1);
}
    printf("El resultado es: %i",res);
return (0);
}

