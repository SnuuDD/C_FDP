#include <stdio.h>

int main()
{
    int down, up, res, upte;
    printf("Dame el la parte de arriba de la ficha: ");
    scanf("%i",&up);
     printf("Dame el lado de abajo: ");
    scanf("%i",&down);
    printf("\n\n");

    if(up>down)
    {
        upte=up;
        up=down;
        down=upte;
    }
    switch(up)
    {

    case 0:
    {
        if(down<7){
        res=0+down;
        }
        else
         printf("La ficha no existe");
    }
    break;

    case 1:
    {
            if((down<7)&&(down>=1)){
                res=6+down;
            }
            else
            printf("La ficha no existe");
    }
    break;
    case 2:
            {
                if((down<7)&&(down>1)){
                    res=11+down;
                    }
                    else
                        printf("La ficha no existe");
                    }
                    break;
    case 3:
            {
                if((down<7)&&(down>2)){
                    res=15+down;
                    }
                    else
                        printf("La ficha no existe");
                    }
                    break;
    case 4:
            {
                if((down<7)&&(down>3)){
                    res=18+down;
                    }
                    else
                        printf("La ficha no existe");
                    }
                    break;
    case 5:
            {
                if((down<7)&&(down>4)){
                    res=20+down;
                    }
                    else
                        printf("La ficha no existe");
                    }
                    break;
   case 6:
            {
                if((down<7)&&(down>5)){
                    res=21+down;
                    }
                    else
                        printf("La ficha no existe");
                    }
    break;
    default:
                        printf("La ficha no existe");
                        return 0;
        }



printf("La posicion de la ficha es: %i",res);
return 0;
}
