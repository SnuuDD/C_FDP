#include <stdio.h>

int main()
{
    int temp;
    //Dame la temp
    scanf("%i",&temp);
    if(temp<-273)
    {
      printf("Temperatura inexistente");
    }
    else if(temp>-274 && temp<1){
       printf("Congelada");
    }
    else if(temp>0 && temp<30){
       printf("Fria");
    }
    else if(temp>29 && temp<100){
       printf("Caliente");
    }
    else printf("Vapor");

return 0;
}
