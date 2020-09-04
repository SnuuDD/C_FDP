#include <stdio.h>
#include "Compara.h"

int main()
{
    float m, p;
    int res;
    //Dame metros
     scanf("%f",&m);
     //Dame pies
     scanf("%f",&p);
     res=caso(m,p);
     if (res==1)
     {
         printf("Si son iguales");
         return 0;
     }
     else
        {
         printf("No son iguales");
         return 0;
     }
return 0;
}
