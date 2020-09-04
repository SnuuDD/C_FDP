#ifndef LAB7HEAD_H_INCLUDED
#define LAB7HEAD_H_INCLUDED

char numpri (int x)
{
    if(x==1 || x==2 || x==3 || x==5 || x==7)
        {
            return '1';
        }
        else
        {
            if(x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0)
            {
                return '1';
            }
            else
                return '0';
        }

}
float sum(int x)
{
    int i=3;
    float sum, res=0;
    for(i=3;i<=x;i++)
    {
        sum=(sqrt(i-2.0)/pow(i,2));
        res=res+sum;
    }
    return res;
}

void menu()
{
   printf(" MENU\na. Numeros primos\nb. Funcion G\ns. Salir\nOpcion:\n");
}

#endif // LAB7HEAD_H_INCLUDED
