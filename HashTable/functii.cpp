#include <iostream>
#include <string.h>
#include "functii.h"

using namespace std;

void init(hashh *H[],int M)
{   
    for(int i=0;i<M;++i)
    {
        H[i]=0;
    }
}
int hh(string cuvant)
{
    int r=0;
    for(int i=0;i<cuvant.length();i++)
        r+=cuvant[i];
    return r;
}



void afisare(hashh *H[],int M)
{
     for(int i=0;i<M;++i){
        cout<<"H["<<i<<"]= ";
        hashh *parc=H[i];
        while(parc!=0)
        {
            cout<<parc->cheie<<" ";
            parc=parc->next;
        }
        cout<<endl;
    }
}

void insert(hashh *H[],int M,string cuvant)
{
    int r=hh(cuvant) % M;

    hashh *p=new hashh;
    p->cheie=cuvant;
    p->next=H[r];
    H[r]=p;
}
