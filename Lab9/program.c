#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void menu()
{
    printf("MENU\n");
    printf("1. Numero de X.\n");
    printf("2. Numero de Y.\n");
    printf("3. Determinar el sexo.\n");
    printf("4. Cambiar a Mayusculas.\n");
    printf("5. Limipiar arreglo.\n");
    printf("6. Salir.\n");
    printf("Opcion:\n");
}

void amayus(char string[])
{
	int i=0;
	int XD='a'-'A';
	for (i=0;string[i]!='\0';++i)
	{
		if(string[i]>='a'&&string[i]<='z')
		{
			string[i]=string[i]-XD;
		}
	}
}

int main()
{
    int opc, cont=0,contx=0,conty=0,contz=0,j=0,largo=0,xd=0, i=0;

    char argv[40];
    do
    {
        contx=0;
        conty=0;
        contz=0;
    menu();
    scanf("%i%*c",&opc);
    switch(opc)
    {

    case 1:
    fgets (argv,40,stdin);
    amayus(argv);
    //fputs (argv,stdout);
    do
    {
     if(argv[i]=='X')
        {
            cont++;
        }
    i++;
    }while(argv[i]!='\0');
    printf("%i",cont);
    break;


    case 2:
     fgets (argv,40,stdin);
     amayus(argv);
    do
    {
     if(argv[i]=='X')
        {
            cont++;
        }
    i++;
    }while(argv[i]!='\0');
    printf("%i",cont);
    break;


    case 3:

    fgets(argv,40,stdin);
    amayus(argv);
    do
    {
     if(argv[i]=='X')
        {
            contx++;
        }
    i++;
    }while(argv[i]!='\0');

    i=0;
    do
    {
     if(argv[i]=='Y')
        {
            conty++;
        }
    i++;
    }while(argv[i]!='\0');
    i=0;

    while(argv[i]!='\0')
    {
     if(argv[i]!='X'&&argv[i]!='Y'&&argv[i]!='\0')
        {
            contz++;
        }
    i++;
    }
    contz=contz-1;
    if(contx>0&&conty==0&&contz==0)
    printf("Femenino");
    else if(contx>0&&conty>0&&contz==0)
    printf("Masculino");
    else
    printf("Mutante");
    fflush(stdin);
    break;

    case 4:

    fgets(argv,50,stdin);
    amayus(argv);
    fputs(argv,stdout);

    break;

    case 5:
    fgets(argv,40,stdin);
    //fputs(argv,stdout);
    largo=strlen(argv);
    do
    {
        if(argv[xd]==' ')
        {
            for(i=xd;i<largo;i++)
            {
                argv[i]=argv[i+1];
            }
            largo--;
        }
        xd++;
    }while(argv[xd]!= '\0');

    fputs(argv,stdout);
    break;
    case 6:
        return 0;
    break;

    }
    printf("\n");
    }while (opc!=6);

    return 0;
}
