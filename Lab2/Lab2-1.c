#include <stdio.h>
int main()
{
    int  x;
    //Ingresa x
    scanf("%i",&x);
    if (x<-2)
    {
        printf("%i",(2*(x*x))+(4*x)+2);
        return 0;
    }
    if (x>=-2 && x<0)
    {
        printf("2");
        return 0;
    }
    else
        printf("%i",(3*x)+1);
    return 0;
}
