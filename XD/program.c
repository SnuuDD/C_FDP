#include <stdio.h>

int main()
{
    int no, x;
    scanf("%i",&no);
   x=no%100;
    if (x==44 || x==77 || x==47 || no%44==0 || no%77==0 || no%47==0 || no%7==0 || no%4==0)
    {printf("YES");
            return 0;}
    else
        printf("NO");
    return 0;
}
