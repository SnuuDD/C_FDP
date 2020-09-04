#include <stdio.h>
#include <stdlib.h>


void llenamatriz(char M[4][6])
{
    int i,j,x=120;
    for(i=0;i<4;i++)
    {
        for (j=0;j<6;j++)
        {
            M[i][j] = x;
            printf("%c ",M[i][j]);
            x--;
        }
        printf("\n");
        
    }
}


void main()
{
    int col=4;
    int ren=6;
    char M[4][6];
    llenamatriz(M);
    
}

