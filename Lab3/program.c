#include <stdio.h>
#include <math.h>


float acc(int v, float r)
{
    float d=r*1.0;
    float res = (v*v)/d;
    return res;
}
float vap(int r, int a)
{
    float res = sqrt(a*r);
    return res;
}
float rad(int v, float a)
{
    float AAAAAAXDINTENTONO17XDXDXD=a*1.0;
    float res = (v*v)/AAAAAAXDINTENTONO17XDXDXD;
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
    scanf("%c",&opc);
    switch(opc)
    {
    case 'a':
        scanf("%i %i",&v,&r);
        //scanf("%i",&r);
        if(r==0)
        {printf("Operacion invalida");
    return 0;
        }
        printf("%.1f",acc(v,r));
    break;
    case 'b':
        scanf("%i %i",&a,&r);
        //scanf("%i",&a);
        printf("%.1f",vap(a,r));
    break;
    case 'c':
        scanf("%i %i",&v,&a);
        //scanf("%i",&a);
            if (a==0)
    {printf("Operacion invalida");
    return 0;
        }
        printf("%.1f",rad(v,a));
    break;
    }

return 0;
}





// ac = v*v / r
// v = sqrt(a*r)
// r=v*v/a
