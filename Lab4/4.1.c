#include <stdio.h>

int unidades_longitud ()

    {
        printf( "\nUNIDADES DE LONGITUD");
        printf( "\n1. Pies - Metros");
        printf( "\n2. Metros - Pies");
        printf( "\n3. Salir" );
        printf( "\nOpcion: ");
return 0;
    }
float metros(float me)
{
    return (me*3.28084);
}

float pies(float ft)
{
    return (ft*0.3048);
}


int main()
{
    int opc;
    float ft,me;
    unidades_longitud();
    scanf("%i%*c",&opc);
    if(opc==1){
            fflush(stdin);
    // Ingresa los pies
    scanf("%f",&ft);
    printf("%.1f",pies(ft));
    }else
    if(opc==2)
    {
        fflush(stdin);
    // Ingresa los metros
    scanf("%f",&me);
    printf("%.1f",metros(me));
    }
    return 0;
}
