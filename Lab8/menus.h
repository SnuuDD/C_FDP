#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

void encabezado()
{
system("CLS");
//system("COLOR 1F");
printf("\n");
printf("         d8888                                        d8b               8888888b.   .d8888b.     8888888b.  \n");
printf("        d88888                                        Y8P               888   Y88b d88P   88b    888   Y88b \n");
printf("       d88P888                                                          888    888 Y88b. d88P    888    888 \n");
printf("      d88P 888 888d888 88888b.d88b.   .d88b.  888d888 888  8888b.       888    888  *Y8888P*     888    888 \n");
printf("     d88P  888 888P*   888 *888 *88b d8P  Y8b 888P*   888     *88b      888    888 .d88P88K.d88P 888    888 \n");
printf("    d88P   888 888     888  888  888 88888888 888     888 .d888888      888    888 888*  Y888P*  888    888 \n");
printf("   d8888888888 888     888  888  888 Y8b.     888     888 888  888      888  .d88P Y88b .d8888b  888  .d88P\n");
printf("  d88P     888 888     888  888  888  *Y8888  888     888 *Y888888      8888888P*   *Y8888P* Y88b8888888P*  \n");
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
    printf("\n a. Espadas ");
    printf("\n b. Arcos");
    printf("\n c. Escudos");
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
void banderaespa()
{
            system("cls");
            system("COLOR 2F");
            printf("\n\n  Excelente, se agregado tu espada. \n\n %cDesea a%cadir alguna otra espada mas? (S/N)",168,164);
            printf("\n Ingresa tu opcion: ");
}
void banderaarco()
{
            system("cls");
            system("COLOR 2F");
            printf("\n\n  Excelente, se agegado tu arco. \n\n %cDesea a%cadir algun arco mas? (S/N)",168,164);
            printf("\n Ingresa tu opcion: ");
}
void banderaescu()
{
            system("cls");
            system("COLOR 2F");
            printf("\n\n  Excelente, se agregado tu escudo. \n\n %cDesea a%cadir algun escudo mas? (S/N)",168,164);
            printf("\n Ingresa tu opcion: ");
}
void espada()

{
    system("COLOR 3F");
        //system("CLS");
        printf("\n %cQue espada deseas? ",168);
        printf("\n a. Espada del Dios del Olympo");
        printf("\n b. Cimitarra Infernal");
        printf("\n c. La Sanguinaria");
        printf("\n d.Salir");
        printf("\n Ingresa tu opcion: ");
}

void arco()
{
    system("COLOR 8F");
     //   system("CLS");
        printf("\n %cQue arco deseas?",168);
        printf("\n a. Memorias de Lord Dominick");
        printf("\n b. Arco de Luz");
        printf("\n c. Ballesta de Horus");
        printf("\n d. Salir");
        printf("\n Ingresa tu opcion: ");
}
void escudo()
{
    system("COLOR 0A");
    //   system("CLS");
        printf("\n %cQue escudo deseas? ",168);
        printf("\n a. Fuerza de Trinidad ");
        printf("\n b. Guanteletes del Hijo del Hielo");
        printf("\n c. Cota de espinas");
        printf("\n d. Salir");
        printf("\n Ingresa tu opcion: ");
}

#endif // MENUS_H_INCLUDED
