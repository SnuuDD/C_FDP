#include<stdio.h>
int main()
{
   int num;
   printf("Introduce el numero: ");
   scanf("%i",&num);
   if(num<4 || num==5)
       printf("El numero es primo");
   else
    if(((num/2)!=0)&&((num/3)!=0)&&((num/5)!=0))
    {
        printf("El numero es primo");
    }
     else
   {
   printf("El numero NO es primo");
   }
}

