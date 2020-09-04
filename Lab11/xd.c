#include <stdio.h>

int main()
{
    char cad[100];
    FILE *lectura;
    FILE *escribir;
    lectura = fopen("Squad.txt","r");
    escribir = fopen("Squad.txt","a");
    fputs("\nEsta es la pandilla de Kazuma\nxdxdxd\nOWO",escribir);
    fclose(escribir);
    while(!feof(lectura))
    {
        fgets(cad,100,lectura);
        printf("%s",cad);
    }
    fclose(lectura);
    return 0;
}
