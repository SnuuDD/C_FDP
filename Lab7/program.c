#include <stdio.h>
#include <time.h>
#include "menus.h"
    int main()
{
    char opc=0, opcD,bandera1=0,exit;
    int costo =0;
    system("mode con: cols=110 lines=25");

    do{
    encabezado();
    printf("Bienvenido guerrero, te esta atendiendo: ");
    empleado(8);
    printf("\n");
    menu();


    scanf("%c%*c",&opc);
    switch(opc)
    {
    case 'a':
    case 'A':
        do{
        if(bandera1==1)
        {
            banderaespa();
            scanf("%c%*c",&exit);
            if(exit=='N' || exit=='n')
            {
                bandera1=0;
                opcD='d';
                break;
            }
            else
                opcD=1;

        }
        encabezado();
            espada();
        scanf("%c%*c",&opcD);
       switch(opcD)
        {
        case 'a':
        case 'A':
            costo=costo+45;
            bandera1=1;
        break;
        case 'b':
        case 'B':
            costo=costo+55;
            bandera1=1;
        break;
        case 'c':
        case 'C':
            costo=costo+60;
              bandera1=1;
        break;
        case 'D':
        case 'd':
            opcD='d';
              bandera1=0;
        break;
        default:
        error();
        }

        }while(opcD!='d');
    break;
    case 'B':
    case 'b':
        do{
                if(bandera1==1)
        {
            banderaarco();
            scanf("%c%*c",&exit);
            if(exit=='N' || exit=='n')
            {
                   bandera1=0;
                opcD='d';
                break;
            }
            else
                opcD=1;

        }
        encabezado();
        arco();
        scanf("%c%*c",&opcD);
        switch(opcD)
        {
        case 'a':
        case 'A':
            costo=costo+15;
            bandera1=1;
        break;
        case 'b':
        case 'B':
            bandera1=1;
            costo=costo+10;
        break;
        case 'c':
        case 'C':
            costo=costo+20;
            bandera1=1;
        break;
        case 'D':
        case 'd':
            opcD='d';
            bandera1=0;

        break;
        default:
        error();

        }
        }while(opcD!='d');
    break;
    case 'c':
    case 'C':
        do{
        if(bandera1==1)
        {
            banderaescu();
            scanf("%c%*c",&exit);
            if(exit=='N' || exit=='n')
            {
                bandera1=0;
                opcD='d';
                break;
            }
            else
                opcD=1;

        }
        encabezado();
        escudo();
        scanf("%c%*c",&opcD);
        switch(opcD)
        {
        case 'a':
        case 'A':
            costo=costo+25;
            bandera1=1;
        break;
        case 'b':
        case 'B':
            costo=costo+20;
            bandera1=1;
        break;
        case 'c':
        case 'C':
            costo=costo+15;
            bandera1=1;
        break;
        case 'D':
        case 'd':
            bandera1=0;
            opcD='d';
        break;
        default:
        error();

        }
        }while(opcD!='d');
    break;
    case 'D':
    case 'd':
            opc='d';
    break;
    default:
        error();


        }
    }while(opc!='d');

    system("COLOR 9F");

    printf("\n\nEl total de tu cuenta ascendera a: %i Oro",costo*10);

    printf("\nGRACIAS POR TU PREFERENCIA \n\n");
    return 0;
}
