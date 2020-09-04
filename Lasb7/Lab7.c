#include <stdio.h>
#include <math.h>
#include "Lab7head.h"

int main()
{

   int x;
   char opc;

   do
   {
    fflush(stdin);
    menu();
   scanf("%c%*c",&opc);

   switch(opc)
       {
        case 'a':
        scanf("%i",&x);
        printf("%c",numpri(x));
        break;
        case 'b':
        scanf("%i",&x);
        printf("%.1f",sum(x));
        break;
        default:
        break;
       }
       printf("\n");
   }
   while(opc!='s');
   return 0;
}


