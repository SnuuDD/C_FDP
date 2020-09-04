#include <stdio.h>
#include <math.h>


float acc(int v, int r)
{
    float res = (v*v)/r;
    return res;
}
float vap(int r, int a)
{
    float res = sqrt(a*r);
    return res;
}
float rad(int v, int a)
{

    float res = (v*v)/a;
    return res;
}

int main()
{
    int v,r,a;
    char opc;
    printf("Tema: Aceleracion centripeta\n");
    printf("a. Aceleracion centripeta de una particula\n");
    printf("b. Velocidad de una particula\n");
    printf("c. Radio de la circunferencia en que se mueve una particula\n");
    printf("Que desea calcular?\n");
    scanf("%c %*c",&opc);
    switch(opc)
    {
    case 'a':
        scanf("%i %i",&v,&r);
        //scanf("%i",&r);
        if(r==0)
        {printf("Operacion invalida");
    return 0;
        }
        printf("%.f",acc(v,r));
    break;
    case 'b':
        scanf("%i %i",&a,&r);
        //scanf("%i",&a);
        printf("%.f",vap(a,r));
    break;
    case 'c':
        scanf("%i %i",&v,&a);
        //scanf("%i",&a);
            if (a==0)
    {printf("Operacion invalida");
    return 0;
        }
        printf("%.f",rad(v,a));
    break;
    }


}





// ac = v*v / r
// v = sqrt(a*r)
// r=v*v/a
