#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potencia(int x, int y)
{
    return pow(x,y);
}

float sumatoria(int i)
{
    double res=0, restemp;
    int x=0;
    do
    {
        restemp= (sqrt((3*x/4.0))/(sqrt(pow(x,5)+pow(x,2))+1.0));
        res=res+restemp;
        x++;
    }while(x<=i);
    return res;
}

float aproxpi(int n)
{
    float pi=0;
    int i=1,sumres=1;
    while (i<=n)
    {
        if(sumres==1)
        {
            pi=pi+(4/i);
            sumres=0;
        }
        else
        {
            pi=pi-(4.0/i);
            sumres=1;
        }
        i=i+2;
    }
    return pi;
}

void menu()
{
printf(" FUNCIONES\n1. Potencia\n2. Evaluar sumatoria\n3. Aproximacion del valor de PI.\n4. Salir\nOpcion:\n");
}

int main()
{
    int opc,x,y,i, n;
    //do
    //{
        menu();
    scanf("%i",&opc);

    switch(opc)
    {
    case 1:
        scanf("%i",&x);
        scanf("%i",&y);
        printf("%i",potencia(x,y));
        return 0;
    break;
    case 2:
        scanf("%i",&i);
        printf("%.1f",sumatoria(i));
        return 0;
    break;
    case 3:
        scanf("%i",&n);
            if (n==0)
        {
            printf("No se puede usar 0");
            return 0;

}
        else{
        printf("%.1f",aproxpi(n));
    return 0;
    }
    default:
    return 0;
    }
    return 0;

    //}while(opc!=4);

}
