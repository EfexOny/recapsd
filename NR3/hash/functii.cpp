#include <iostream>
#include <string>

#include "functii.h"

using namespace std;



void inserare(lista *&list,int data,string nume){

    if(list==0)
    {
        lista *n=new lista;
        n->nume=nume;
        n->pret=data;
        n->next=0;
        list=n;
    }
    else
    {
        lista *parc=list;
         while(parc->next!=0)
        {
            parc=list->next;
        }

        lista *n=new lista;
        n->nume=nume;
        n->pret=data;
        n->next=0;
        
       
        parc->next=n;
    }
}

void  afisare(lista *list){
    if(list!=0)
    {
        while(list->next!=0)
        {
            cout<<list->nume<<":"<<list->pret<<" ";
            list=list->next;
        }
        cout<<list->nume<<":"<<list->pret<<" ";

    }
}

int hash_function(string denumire)
{
    int r=0;
    for(int i=0;i<denumire.length();i++)
    {
        r+=denumire[i];
    }
    r=r%M;
    return r;
}

void hash_inserare(b *h[],lista *l)
{
    int r=0;
    while(l!=0)
    {
        if(l->pret>10)
        {
            r = hash_function(l->nume);

            b *insert = new b;
            insert->denumire = l->nume;

            insert->next = h[r];
            h[r] = insert;
        }
        l=l->next;
    }
}

