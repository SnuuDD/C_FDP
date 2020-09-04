#include <stdio.h>
//Se pide la entrada en floatante, se convierte el flotante a entero y se evalua
int main()
{
    float a;
    int as;
    //printf("Dame la escala");
    scanf("%f",&a);
    as=a;
    switch(as)
    {
     case 3:
        printf("Generalmente no se siente, pero es registrado");
        break;
    case 4:
        printf("Generalmente no se siente, pero es registrado");
        break;
    case 5:
        printf("A menudo se siente, pero solo causa danos menores");
        break;
    case 6:
        printf("Ocasiona danos ligeros a edificios");
        break;
    case 7:
        printf("Puedo ocasionar danos severos en areas muy pobladas");
        break;
    case 8:
        printf("Terremoto mayor. Causa grandes danos");
        break;
     case 9:
        printf("Terremoto mayor. Causa grandes danos");
        break;
     case 10:
        printf("Gran terremoto. Destruccion total en comunidades cercanas");
        break;
     default:
        printf("Escala no existe");

    }

return 0;
}

