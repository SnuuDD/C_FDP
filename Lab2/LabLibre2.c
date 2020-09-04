#include <stdio.h>

int main()
{
    int patas;
    char sino=0;
    system("Color 1f");
    printf("\n\nQue mascota es ideal para ti?");
    printf("\n Quieres (C)ompania o algo que (A)limentar? (C/A): ");
    scanf("%c",&sino);
    if(sino=='c' || sino=='C')
    {
        printf(" \nUn DOGGO es tu mascota ideal \n");
        return 0;
    }
    else
        sino=0;
        fflush(stdin);
    printf("\n Te molestaria limpiar el pelaje de tu mascota? (S/N): ");
    scanf("%c",&sino);
    if(sino=='s' || sino=='S')
    {
        sino=0;
        fflush(stdin);
        printf("\nBueno, y cuantas patas puedes manejar? (0/2/4/8): ");
        scanf("%i",&patas);
        if(patas==0)
        {
            sino=0;
            fflush(stdin);
            printf("\n Vale, Como te sentirias comprando ratones para tu mascota cada semana? (B)ien / (M)aL: ");
            scanf("%c",&sino);
            if(sino=='b' || sino=='B')
            {
            printf(" \nUna SSSSERPIENTE es tu mascota ideal");
            return 0;
            }
            else {printf(" \nUna PECECITO es tu mascota ideal");
            return 0;
            }
        }
        else if (patas==2)
        {
            printf("\n Un PAJARO seria tu mascota ideal");
            return 0;
        }
            else
            if (patas==4)
            {
            sino=0;
            fflush(stdin);
            printf("\n Genial, pero, de sangre (F)ria o (C)aliente? (F/C): ");
            scanf("%c",&sino);
                  if(sino=='f' || sino=='F')
                  {
                      sino=0;
                      fflush(stdin);
                      printf("\n El frio esta bieeeen, aun que tienes prisa por tener una mascota? (S/N): ");
                      scanf("%c",&sino);
                      if(sino=='s' || sino=='S')
                        {
                          printf("\nUn IGUANA seria tu mascota ideal \n");
                          return 0;
                        }
                      else
                        {
                          printf("\nUn TORTUGA seria tu mazzz... \n");
                          return 0;
                        }

                  }
                  else
                  {
                      sino=0;
                      fflush(stdin);
                      printf("\n Okay, (C)on cola o (S)in cola? (C/S): ");
                      scanf("%c",&sino);
                      if(sino=='s' || sino=='S')
                      {
                            sino=0;
                            fflush(stdin);
                            printf("\n Con Espinas? (S/N): ");
                            scanf("%c",&sino);
                            if(sino=='s' || sino=='S')
                            {
                                printf("\nUn ERIZO seria tu mascota ideal\n");
                                return 0;
                            }
                            else
                            {
                                printf("\nUn HAMSTER es lo tuyo\n");
                                return 0;
                            }

                      }
                      else
                      {
                      sino=0;
                      fflush(stdin);
                      printf("\n Okay, su cola seria larga y (E)sponjosa o (S)in pelo? (E/S): ");
                      scanf("%c",&sino);
                      if(sino=='E' || sino=='e')
                            {
                                printf("\nUn GERBO seria tu mascota ideal XD\n");
                                return 0;
                            }
                            else
                            {
                                printf("\nUn RATON es lo tuyo :0\n");
                                return 0;
                            }
                      }
                  }
            }else
            {
                printf("\nUna ARA%cA es lo ideal para ti\n",165);
                return 0;
            }
    }
    else
        {
            sino=0;
            fflush(stdin);
            printf("\n Tienes problema si es muy oloroso? (S/N): ");
            scanf("%c",&sino);
            if(sino=='n' || sino=='N')
            {
                 printf("\n Tu mascota ideal es un HURON \n");
                 return 0;
            }
            else
            {
                sino=0;
                fflush(stdin);
                printf("\n Esta bien si es mordelon y temperamental? (S/N): ");
                scanf("%c",&sino);
                if(sino=='s' || sino=='S')
                {
                    printf("Un GATO es lo mejor para ti\n");
                    return 0;
                }
                else
                {
                    printf("Un CONEJITO es lo mejor para ti\n");
                    return 0;
                }
            }
        }
    return 0;

}
