#include<stdio.h>

int main()
{
     char cad[100],nombre[100];
    FILE *lectura;
    FILE *escribir;
    printf("\n\n\n    Escribe el nombre del archivo que se va a crear: ");
    scanf("%s",nombre);
    system("cls");
    escribir = fopen(nombre,"w");
    lectura = fopen(nombre,"r");
    char mens[70], letra,opc;
    int i, llave;
    system("color 1f");
    printf("\n\n\n");
    printf("                         ENCRIPTADOR BASICO TIPO CESAR CIPHER");
    printf("\n\n\n\n");
    do
    {
    printf("%cQue deseas hacer?\nSugerido: Primero encripta, a menos que tengas el archivo ya creado\n",168);
    printf("1. Encriptar\n");
    printf("2. Desencriptar\n");
    printf("3. Salir\n");
    printf("Opcion: ");
    scanf("%i%*c",&opc);
    system("cls");
    printf("\n\n\n\n");

    switch(opc)
    {
    case 1:
    printf("Ingresa un mensaje no mayor a 70 letras: ");
    fgets(mens,70,stdin);
    printf("Ingresa la llave, esta tendra que ser un numero entero NO MAYOR A 10: ");
    scanf("%i", &llave);

    for(i=0;mens[i]!='\0';i++)
        {
        letra=mens[i];
        if(letra>='a'&&letra<= 'z')//Este procedimento busca que los caracteres sean letras minusculas, este procedimento no altera caracteres especiales
        {
         letra=letra+llave;//Este le suma la llave que dio el usuario
            if(letra>'z')//En caso de que el valor numerico de la letra superara al de la letra Z realiza el siguiente procedimeinto
            {
            letra=letra-'z'+'a'- 1;//Este procedimiento lo reliza para volver a meter la letra al alfabeto
            }
            mens[i]=letra;//Regresa la letra al arreglo
        }
        else if(letra>='A'&&letra<= 'Z')//Realiza el mismo procedimiento con letras mayusculas
        {
            letra=letra+llave;
            if(letra>'Z')
            {
                letra=letra-'Z'+'A'-1;
            }
            mens[i]=letra;
        }
    }

    printf("El mensaje encriptado se ha guardado en el archivo");
    fputs(mens,escribir);
    fclose(escribir);
    printf("\n\n\n");
    system("pause");
    system("cls");

    break;
    case 2:
    printf("El mensaje se tomo del archivo ya creado :) \n\n");
    while(!feof(lectura))
    {
        fgets(mens,70,lectura);
    }
    fclose(lectura);
    printf("Ingresa la llave, esta tendra que ser un numero entero NO MAYOR A 10: ");
    scanf("%i", &llave);

    for(i=0;mens[i]!='\0';i++)
        {
        letra=mens[i];
        if(letra>='a'&&letra<='z')//Este procedimento tiene el mismo sustento solo que en este caso se resta la llave
        {
         letra=letra-llave;
            if(letra<'a')//Este procedimiento devuelve la letra al alfabeto en caso de que se haya salido
            {
            letra=letra+'z'-'a'+1;
            }
            mens[i]=letra;
        }
        else if(letra>='A'&&letra<='Z')
        {
            letra=letra-llave;
            if(letra<'A')
            {
                letra=letra+'Z'-'A'+1;
            }
            mens[i]=letra;
        }
    }
    printf("El mensaje desencriptado es: ");
    fputs(mens,stdout);
    printf("\n\n\n");
    system("pause");
    system("cls");

    break;
    case 3:
        opc=3;
    break;

    }
    }while(opc!=3);
    return 0;
}
