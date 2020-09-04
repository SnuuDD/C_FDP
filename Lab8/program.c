#include <stdio.h>
#include <stdlib.h>

void menu()
{
printf("MENU DE OPCIONES\n");
printf("1. Inicializa arreglo\n");
printf("2. Captura arreglo\n");
printf("3. Imprime arreglo\n");
printf("4. Elementos impares en el arreglo\n");
printf("5. Sustituye arreglo\n");
printf("6. Invierte arreglo\n");
printf("7. Salir\n");
printf("Opcion:\n");
}

int main()
{
    int opc, A[10], cap=0, i, busca, cambia;
    do
    {
        menu();
        scanf("%i",&opc);
        switch (opc)
        {
        case 1:
            for (i=0; i<10; i++)
            A[i] = 0;
            for (i=0; i<10; i++)
            {
             printf("%i ",A[i]);
            }
            printf("\n");
        break;
        case 2:
            for (i=0; i<10; i++)
            {
             cap=0;
             scanf("%i",&cap);
             A[i] = cap;
            }
            for (i=0; i<10; i++)
            {
             printf("%i ",A[i]);
            }
            printf("\n");
        break;
        case 3:
            for (i=0; i<10; i++)
            {
             printf("%i ",A[i]);
            }
            printf("\n");

        break;
        case 4:
            for (i=0; i<10; i++)
            {
             cap=0;
             scanf("%i",&cap);
             A[i] = cap;
            }
            cap=0;
            for (i=0; i<10; i++)
            {
             if (A[i]%2!=0)
                cap++;
            }
            printf("%i\n",cap);
        break;
        case 5:
        for (i=0; i<10; i++)
            {
             cap=0;
             scanf("%i",&cap);
             A[i] = cap;
            }
            scanf("%i",&busca);
            scanf("%i",&cambia);
            for (i=0; i<10; i++)
            {
             if (A[i]==busca)
                A[i]=cambia;
            }
            for (i=0; i<10; i++)
            {
             printf("%i ",A[i]);
            }
            printf("\n");
        break;
        case 6:
            for (i=0; i<10; i++)
            {
             cap=0;
             scanf("%i",&cap);
             A[i] = cap;
            }
             busca=A[0];
             cambia=A[9];
             A[0]=cambia;
             A[9]=busca;
             busca=A[1];
             cambia=A[8];
             A[1]=cambia;
             A[8]=busca;
             busca=A[2];
             cambia=A[7];
             A[2]=cambia;
             A[7]=busca;
             busca=A[3];
             cambia=A[6];
             A[3]=cambia;
             A[6]=busca;
             busca=A[4];
             cambia=A[5];
             A[4]=cambia;
             A[5]=busca;
            for (i=0; i<10; i++)
            {
             printf("%i ",A[i]);
            }
            printf("\n");
        break;




        }


    }while(opc!=7);
    return 0;
}
