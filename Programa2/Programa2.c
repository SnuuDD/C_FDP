#include <stdio.h>

int main()
{



int L1, L2, L3;
    printf("Dame el lado 1: ");
    scanf("%i",&L1);
     printf("Dame el lado 2: ");
    scanf("%i",&L2);
     printf("Dame el lado 3: ");
    scanf("%i",&L3);
    if (((L1+L2)>L3) && ((L2+L3)>L1) && ((L3+L2)>L1)&& (L1>0) && (L2>0) && (L3>0))
    {
        if ((L1 == L2 && L2 == L3))
        {
          printf("Triangulo Equilatero");
        }
        else
           // printf("%i %i %i",L1,L2,L3);
             if ((L1 == L2 || L2 == L3 || L1 == L3))
              printf("Triangulo Isoceles");


             else
                  if ((L1!=L2) && (L2!=L3)){
                        printf("Triangulo Escaleno");
                  }
    }

    else
        printf("No es triangulo");
return 0;
}
