    #include <stdio.h>
    #include <stdlib.h>
    #include <conio.h>

    #define MAX_FILA 3
    #define MAX_COLUM 3
    #define MAX_JUG 2
    #define MAX_TURNO 9

    void turno_jugador();
    //void imprimir_tablero(char gato[MAX_FILA][MAX_COLUM]);

    int main()
    {
        printf("Juego del Gato")
        turno_jugador();
        return 0;
    }

    void imprimir_tablero(char gato[MAX_FILA][MAX_COLUM])
    {
        int i,j;
        for(i=0;i<MAX_FILA;i++)
        {
            for(j=0;j<MAX_COLUM;j++)
            {
                if((gato[i][j]=='X')||(gato[i][j]=='O'))
                   printf("%c",gato[i][j]);
                else
                   printf(" ");
                   printf("|");
            }
            printf("\n");
               printf("______");
            printf("\n");
        }
    }

    void turno_jugador()
    {
        int fila,columna,i,turno=1;
        char jugador[]={'X','O'},letra;
        char gato[MAX_FILA][MAX_COLUM];
        do
        {
            for(i=0;i<MAX_JUG;i++)
            {
                printf("Es turno del jugador %c\n",jugador[i]);
                printf("Dime la fila (1 a 3): ");
                scanf("%d",&fila);
                printf("Dime la columna(1 a 3): ");
                scanf("%d",&columna);
                letra=jugador[i];
                gato[fila-1][columna-1]=letra; // guardo la letra del jugador en la matriz
                imprimir_tablero(gato); // paso la matriz a la funcion
                turno++;
            }
        }while(turno<=MAX_TURNO);
    }
