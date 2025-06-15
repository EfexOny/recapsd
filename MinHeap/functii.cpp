#include <iostream>
#include "functii.h"

using namespace std;

void inserare(int data,heap *h,int size)
{
    h->h[h->last]=data;
    int curent = h->last;
    int parinte = h->last/2;
    while(curent >= 1 && h->h[curent] < h->h[parinte])
    {
        int aux=h->h[curent];
        h->h[curent]=h->h[parinte];
        h->h[parinte]=aux;
        curent=parinte;
        parinte=curent/2;
    }

    h->last=h->last+1;
}

void remove(heap *h)
{
    h->h[1]=h->h[h->last-1];
    h->last--;

    int parinte=1;
    int fiu1=parinte*2;
    int fiu2=parinte*2+1;
    int caut=h->last;

    while(h->h[parinte] >  min(h->h[fiu1],h->h[fiu2]) && fiu1 < h->last && fiu2 < h->last)
    {
        if(h->h[parinte] > h->h[fiu1] && h->h[fiu1] <= h->h[fiu2])
        {
            int aux=h->h[parinte];
            h->h[parinte]=h->h[fiu1];
            h->h[fiu1]=aux;
            
            parinte = fiu1;
        }
        else
        if(h->h[parinte] > h->h[fiu2] && h->h[fiu2] <= h->h[fiu1])
        {
             int aux=h->h[parinte];
            h->h[parinte]=h->h[fiu2];
            h->h[fiu2]=aux;
            
            parinte = fiu2;
        }

        fiu1=parinte*2;
        fiu2=parinte*2+1;
    }
}