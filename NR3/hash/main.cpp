#include <iostream>
#include <string>

#include "functii.h"

using namespace std;

int main(){
    lista *list=0;
    inserare(list,21,"marius");
    inserare(list,10,"ales");
    inserare(list,14,"pos");
    afisare(list);

    b *h[M];
    for(int i=0;i<M;i++)
    {
        h[i]=0;
    }

    hash_inserare(h,list);
    cout<<endl;
    for(int i=0;i<M;i++)
    {
        if(h[i]!=0)
        {
            b *parc=h[i];
            while(parc->next!=0)
            {
                cout<<"--"<<parc->denumire<<" ";
                parc=parc->next;
            }
            cout<<"--"<<parc->denumire<<" ";

        }
    }
    
    return 0;
}