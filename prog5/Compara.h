#ifndef COMPARA_H_INCLUDED
#define COMPARA_H_INCLUDED

float caso (float m, float p)
{
    float res=0;
    res=m*0.3048002340863925;
    if(p==res)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

#endif // COMPARA_H_INCLUDED
