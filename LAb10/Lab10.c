#include <stdio.h>
#include <stdlib.h>
#define col 3
#define rel 3

void menu()
{
        printf("MENU DE OPCIONES\n");
        printf("1. Inicializa matriz consecutiva.\n");
        printf("2. Inicializa matriz reversa.\n");
        printf("3. Inicializa matriz identidad.\n");
        printf("4. Imprime matriz.\n");
        printf("5. Cuenta positivos en la matriz.\n");
        printf("6. Suma primera diagonal.\n");
        printf("7. Suma diagonal inversa.\n");
        printf("8. Encuentra el mayor.\n");
        printf("9. Salir\n");
        printf("Opcion:\n");
}

||
int main()
{
    int opc=0,j=0, i=0, x=1,a=0, matriz[col][rel];
   // menu();
    //scanf("%i",&opc);
    do
    {
        x=0;
        menu();
        scanf("%i",&opc);
        switch(opc)
        {
        case 1:
            x=1;
            for(i=0;i!=rel;i++)
            {
                for(j=0;j!=col;j++)
                {
                    matriz[i][j]=x;
                    x++;
                }

            }
        break;
        case 2:
            x=-90;
            for(i=0;i!=rel;i++)
            {
                for(j=0;j!=col;j++)
                {
                    matriz[i][j]=x;
                    x=x+10;
                }

            }
        break;
        case 3:

            for(i=0;i!=rel;i++)
            {
                for(j=0;j!=col;j++)
                {
                    if(i==j){
                    matriz[i][j]=1;
                    }
                    else{matriz[i][j]=0;}
                }

            }
        break;
        case 4:
            for(i=0;i!=rel;i++)
            {
                for(j=0;j!=col;j++)
                    {
                    printf("%i ",matriz[i][j]);
                    }
                printf("\n");
            }

        break;
        case 5:
         x=0;
           for(i=0;i!=rel;i++)
            {
            for(j=0;j!=col;j++)
                {
                  if(matriz[i][j]>=1)
                  {
                    x++;
                  }
                }
              }
              printf("%i\n",x);
        break;
        case 6:
            a=0;
            for(i=0;i!=rel;i++)
            {
                for(j=0;j!=col;j++)
                {
                    if(i==j){
                    a=a+matriz[i][j];
                    }
                }

            }
            printf("%i\n",a);
        break;
        case 7:
            a=0;
            for(i=0;i!=rel;i++)
            {
                for(j=0;j!=col;j++)
                {
                  if((i==0 && j==2)||(i==1 && j==1)||(i==2&&j==0))
                  {
                    a=a+matriz[i][j];
                  }
                }
              }
              printf("%i\n",a);
        break;
        case 8:
            a=-5000;
            for(i=0;i!=rel;i++)
            {
                for(j=0;j!=col;j++)
                {
                    if(a<matriz[i][j]){
                    a=matriz[i][j];
                    }
                }

            }
            printf("%i\n",a);
        break;
        }

    }
    while(opc!=9);
    return 0;



}
