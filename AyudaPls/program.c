#include <stdio.h>
#include <string.h>


void l1(char arch[50]){
FILE *leer;
float cont,prueba=0;
char cad[70],basura[70],res[70];
leer=fopen(arch,"r");
/*if(read==NULL){
printf("el archivo no se encontro\n");
}else*/{
while (!feof(leer))
    {
        fscanf(leer, "%s %s %s %f", basura, cad, basura, &cont);
        if (cont>prueba){
            prueba=cont;
            strcpy(res,cad);
            }
    }
printf("%s\n",res);
}
fclose(leer);
}

void ul(char arch[50]){
FILE *leer;
float cont,prueba=500000;
char cad[70],basura[70],res[70];
leer=fopen(arch,"r");
/*if(read==NULL){
printf("el archivo no se encontro\n");
}else*/{
while (!feof(leer))
    {
        fscanf(leer, "%s %s %s %f", basura, cad, basura, &cont);
        if (cont<prueba){
            prueba=cont;
            strcpy(res,cad);
            }
    }
printf("%s\n",res);
}
fclose(leer);
}

void ms(char arch[50]){
FILE *leer;
int letra,letraenc,rot=13;
leer=fopen(arch,"r");
while((letra=getc(leer))!= EOF){

if(letra>='A'&&letra<='Z'){
            if((letraenc=letra+rot)<='Z')
                putchar(letraenc);
            else{
                   letraenc=letra-rot;
                putchar(letraenc);
            }
        }
        else if(letra>='a'&&letra<='z'){
            if((letraenc=letra+rot)<='z')
                putchar(letraenc);
            else{
                letraenc=letra-rot;
                putchar(letraenc);
            }
        }else
            putchar(letra);
    }

printf("\n");
fclose(leer);

}

int main(){
    char arch[100];
    int opc;
do{
        printf("menu\n1) primer_lugar\n2) ultimo_lugar\n3) mensaje_secreto\n4) salir\n");
        scanf("%i",&opc);
        switch(opc){
            case 1:
            scanf("%s",arch);
            l1(arch);
            break;

            case 2:
            scanf("%s",arch);
            ul(arch);
            break;

            case 3:
            scanf("%s",arch);
            ms(arch);
            break;
}
}while(opc!=4);
return 0;
}
