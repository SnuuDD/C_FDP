#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

void encabezado()
{
system("CLS");
//system("COLOR 1F");
printf("\n");
printf("                     SSSSSSR             SSSSSSR            SSR                         SS                 SSR      SSR                     SSR                \n");
printf("     SSRSSR        SS  __SSR           SS  __SSR           SS |                        R__|                SSSR    SSS |                    R__|       SSRSSR  \n");
printf("     RSSS  |       SS /  R__| SSSSSSR  SS /  R__|SSSSSSR SSSSSSR    SSSSSSR   SSSSSSR  SSR  SSSSSSR        SSSSR  SSSS |SSR   SSR  SSSSSSR  SSR        RSSS  | \n");
printf("    SSSSSSSR       SS |       R____SSR SSSSR    SS  __SSRR_SS  _|  SS  __SSR SS  __SSR SS | R____SSR       SSRSSRSS SS |SS |  SS |SS  __SSR SS |      SSSSSSSR \n");
printf("    R_SSS __|      SS |       SSSSSSS |SS  _|   SSSSSSSS | SS |    SSSSSSSS |SS |  R__|SS | SSSSSSS |      SS RSSS  SS |SS |  SS |SS /  SS |SS |      R_SSS __|\n");
printf("     SS SSR        SS |  SSR SS  __SS |SS |     SS   ____| SS |SSR SS   ____|SS |      SS |SS  __SS |      SS |RS  /SS |SS |  SS |SS |  SS |SS |       SS SSR  \n");
printf("     R__R__|       RSSSSSS  |RSSSSSSS |SS |     RSSSSSSSR  RSSSS  |RSSSSSSSR SS |      SS |RSSSSSSS |      SS | R_/ SS |RSSSSSS  |RSSSSSSS |SS |       R__R__| \n");
printf("                    R______/  R_______|R__|      R_______|  R____/  R_______|R__|      R__| R_______|      R__|     R__| R______/  R____SS |R__|               \n");
printf("                                                                                                                                  SSR   SS |                   \n");
printf("                                                                                                                                  RSSSSSS  |                   \n");
printf("                                                                                                                                   R______/                    \n");
printf("\n");


}
void empleado(int x)
{
    int num, i=1;
    srand(time(NULL));
    while(x>i)
    {
        if(i==1)
        {
              num=65+rand()%(92-65);
              printf("%c",num);
        }
        else
        {
            num=97+rand()%(122-97);
              printf("%c",num);
        }
        i++;

    }
}
void menu()
{
    //system("CLS");
    system("COLOR 1F");
   // printf("\n ---- CAFETERIA MUGI 2.0 RELOADED EDITION ---- ");
    printf("\n %cQue deseas ordenar? ",168);
    printf("\n a. Desayunos ");
    printf("\n b. Bebidas");
    printf("\n c. Postres");
     printf("\n d. Salir");
     printf("\n Ingresa tu opcion: ");

}

void error()
{
    system("CLS");
    system("COLOR CF");
    printf("\n\n OPCION IVNALIDA, PRUEBA DE NUEVO\n\n");
    system("PAUSE");
}
void banderadesa()
{
            system("cls");
            system("COLOR 2F");
            printf("\n\n  Excelente, se agregara a su orden. \n\n %cDesea a%cadir algo mas a su desayuno? (S/N)",168,164);
            printf("\n Ingresa tu opcion: ");
}
void banderabebida()
{
            system("cls");
            system("COLOR 2F");
            printf("\n\n  Excelente, se agregara a su orden. \n\n %cDesea a%cadir alguna bebida mas? (S/N)",168,164);
            printf("\n Ingresa tu opcion: ");
}
void banderapostre()
{
            system("cls");
            system("COLOR 2F");
            printf("\n\n  Excelente, se agregara a su orden. \n\n %cDesea a%cadir algun postre mas? (S/N)",168,164);
            printf("\n Ingresa tu opcion: ");
}
void desayuno()

{
    system("COLOR 3F");
        //system("CLS");
        printf("\n %cQue desayuno deseas? (Todos los desyunos traen fruta y cafe) ",168);
        printf("\n a. Huevitos con jamon ");
        printf("\n b. Molletes");
        printf("\n c. Huaraches");
        printf("\n d.Salir");
        printf("\n Ingresa tu opcion: ");
}

void bebida()
{
    system("COLOR 8F");
     //   system("CLS");
        printf("\n %cQue bebida deseas?",168);
        printf("\n a. Chocolate");
        printf("\n b. Leche");
        printf("\n c. Awa de UwU");
        printf("\n d. Salir");
        printf("\n Ingresa tu opcion: ");
}
void postre()
{
    system("COLOR 0A");
    //   system("CLS");
        printf("\n %cQue Postre deseas? ",168);
        printf("\n a. Pastel de chocolate ");
        printf("\n b. Brownie");
        printf("\n c. Alfajor");
        printf("\n d. Salir");
        printf("\n Ingresa tu opcion: ");
}

#endif // MENUS_H_INCLUDED
