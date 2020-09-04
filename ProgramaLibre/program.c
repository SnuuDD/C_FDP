#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{
    int niva, atka, poda, defr, varc;
    float stab=1.5, efec, danio, danio2, daniofinal1,daniofinal2, danio3, danio4, danio5, danio6, danio61;
    char nombre[15], nombre2[15], sn[1],fe='a';
    printf("\n\n  ***** CALCULADORA DE DA%cO POKEMON *****",165);
    printf("\n Inserta el nombre de tu Pokemon: ");
    scanf("%s", nombre);
    nombre[strlen(nombre)]='\0';
    printf("\n Inserta el nombre de tu Pokemon Rival: ");
    scanf("%s", nombre2);
    nombre2[strlen(nombre2)]='\0';
    printf("\n\n Introduce el Nivel de %s entre 1 y 100: ",nombre);
    scanf("%i",&niva);

    do {
    printf("\n %cEl Ataque que usaras es de categoria Fisica o Especial? (F/E): ",168);
   // fflush(stdin);
    scanf(" %c",&fe);
    if ((fe == 'f')|| (fe == 'F'))
    {
            printf("\nIntroduce el valor de Ataque Fisico de %s: ",nombre);
            scanf("%i",&atka);
            printf("\nIntroduce el poder base del ataque que usara %s, este valor esta entre 1 - 200: ",nombre);
            scanf("%i",&poda);
            printf("\nIntroduce el valor de Defensa Fisica de %s: ",nombre2);
            scanf("%i",&defr);
    }
    else
        if((fe == 'e')|| (fe == 'E'))
    {
        printf("\nIntroduce el valor de Ataque Especial de %s: ",nombre);
            scanf("%i",&atka);
            printf("\nIntroduce el poder base del ataque que usara %s, este valor esta entre 1 - 200: ",nombre);
            scanf("%i",&poda);
            printf("\nIntroduce el valor de Defensa Especial de %s: ",nombre2);
            scanf("%i",&defr);
    }
    if((fe != 'f')&& (fe != 'F')&&(fe != 'E')&& (fe != 'e'))
    {
    system("color 4f");
    printf("\nOpcion ingresada NO valida, por favor ingrese de nuevo.");
    printf("\n %cEl Ataque que usaras es de categoria Fisica o Especial? (F/E): ",168);
    scanf(" %c",&fe);
    }


    } while((fe != 'f')&&(fe != 'F')&&(fe != 'E')&& (fe != 'e'));



    printf("\n %cEl ataque usado por %s, frente %s, es eficaz? \nEscribe 0.25, 0.5, 1, 2, 4 dependiendo de la eficacia?: ",168,nombre,nombre2);
    scanf("%f",&efec);

     do {
    printf("\n %cEl Ataque que usaras es del mismo tipo que el Pokemon? (S/N): ",168);
   // fflush(stdin);
    scanf(" %c",&fe);
    if ((fe == 's')|| (fe == 'S'))
    {
            stab=1.5;
    }
    else
        if((fe == 'n')|| (fe == 'N'))
    {
       stab=1.0;
    }
    if((fe != 's')&& (fe != 'S')&&(fe != 'n')&& (fe != 'N'))
    {
    system("color 4f");
    printf("\nOpcion ingresada NO valida, por favor ingrese de nuevo.");
    printf("\n %cEl Ataque que usaras es del mismo tipo que el Pokemon? (S/N):",168);
    scanf(" %c",&fe);
    }
    }while((fe != 's')&&(fe != 'S')&&(fe != 'N')&& (fe != 'n'));
    //Casos de Prueba
   // printf("\n%.2f",stab);
   // printf("\n%.2f",efec);
    printf("\n%i",varc);
   // printf("\n%i",niva);
   // printf("\n%i",atka);
   // printf("\n%i",poda);

   //La formula se divido en 6 partes para no desbordar la memoria
    danio=(0.01*stab*efec*85);
    danio2=((0.2*niva)+1);
    danio3=atka*poda;
    danio4=25*defr;
    danio5=danio2/danio4;
    danio6=danio5*danio3;
    daniofinal1=danio*danio6;
   //printf("%f",danio);

    danio=(0.01*stab*efec*100);
    danio2=((0.2*niva)+1);
    danio3=atka*poda;
    danio4=25*defr;
    danio5=danio2/danio4;
    danio61=danio5*danio3;
    daniofinal2=danio*danio6;

    printf("\n\n La cantidad de da%co en Puntos de Salud (HP)\n que hara %s, frente a %s, sera de entre: %.2f HP y %.2f HP \n\n",164,nombre,nombre2,daniofinal1+2,daniofinal2+2);
    system("PAUSE");

    return 0;
}
