#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void error()
{
    system("CLS");
    system("COLOR CF");
    printf("\n\n OPCION IVNALIDA, PRUEBA DE NUEVO\n\n");
}

void menu()
{
    printf("\n\n    POKEDEX (Con archivos XD)");
    printf("\n    %cQue deseas realizar?",168);
    printf("\n    1. Buscar un Pokemon por su numero");
    printf("\n    2. Obtener los datos de un Pokemon Aleatorio");
    printf("\n    3. Salir");
    printf("\n    Opcion: ");
}

void Pokemon(int num) //Funcion que recorre el archivo para encontrar el numero de pokemon recibido y lo busca en el archivo

{
    FILE *leer;
    leer=fopen("POKEDEX.txt","r");
    int pok=0,cont=0;
    char datos1[200], datos2[50],datos3[50],datos4[50],datos5[50],datos6[50],datos7[50];
    while(!feof(leer))
    {
        fscanf(leer, "%i %s %s %s %s %s %s %s",&pok, datos1, datos2, datos3, datos4, datos5, datos6, datos7);
        if (pok==num)
            {
            printf("\n    Los datos del Pokemon son: ");
            printf("%i %s %s %s %s %s %s %s \n\n    ",pok, datos1, datos2, datos3, datos4, datos5, datos6, datos7);
            break;
            }

        if(cont>855){
            printf("\n    El numero de Pokemon no existe\n\n    ");
            /*printf("%i",pok); //Se uso para la comprobacion de errores
            printf("%i",num);*/
            break;
        }
    cont++;

    }
    fclose(leer);

}

int main() //Programa que busca un Pokemon en un archivo y te arroja el nombre y sus estadisticas base
{
    system("color 1f");
    srand(time(NULL));
    int num=0, opc=0;
    while(opc!=3)
        {
        system("color 1f");
        menu();
        scanf("%i",&opc);
        switch(opc)
        {
        case 1:
        printf("\n    Teclea el numero del Pokemon entre 1 y 807: ");
        scanf("%i",&num);
        Pokemon(num);
        break;
        case 2:
        printf("\n    Tu Pokemon Aleatorio es: ");
        num = rand () % (807) + 1;   // Este está entre 1 y 807
        Pokemon(num);
        break;
        case 3:
            return 0;
        default:
           error();
        }
        system("Pause");
        system("cls");
        }


    return 0;
}


