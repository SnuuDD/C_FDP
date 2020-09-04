#include <stdio.h>

void unidades_longitud ()
{
printf("MENU\n");
  printf("1. Rendmiento de Combustible\n");
  printf("2. Es factible que quepa la cancha de americano\n");
  printf("Opcion\n");
    }
float metros(int num1, int num2)
{
    return ((num1*0.3048)/num2);
}

float pies( int num1, int num2)
{
    float res1, res2;
    res1=(num1*3.28084);
    res2=(num2*3.28084);
    if(res1>=159 && res2>=359)
    printf("s");
    else
        printf("n");
}


int main()
{
    int opc, num1, num2;
    unidades_longitud();
    scanf("%i%*c",&opc);
    if(opc==2){
            fflush(stdin);
    // Ingresa los pies
    scanf("%i %i%*c", &num1, &num2);
    pies(num1,num2);
    //printf("%c",pies(num1,num2));
    return 0;
    }else
    if(opc==1)
    {
        fflush(stdin);
    // Ingresa los metros
    scanf("%i %i%*c", &num1, &num2);
    printf("%.2f",metros(num1,num2));
    }
    return 0;
}
