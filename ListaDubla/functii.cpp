#include <iostream>
#include "functii.h"

using namespace std;

void inserare(lista *&l,int data)
{
    if(l->prim==0)
    {
      
        elem *nou=new elem;
        nou->data=data;
        nou->urm=0;
        nou->pred=0;
        l->prim=nou;
        l->ultim=l->prim;
    }
    else
    {
        elem *p=l->prim;
        while(p->urm!=0)
        {
            p=p->urm;
        }
        elem *nou = new elem;
        nou->data=data;
        nou->pred=p;
        nou->urm=0;
        p->urm=nou;
    }
}
void afisare(lista *l)
{
    if(l->prim!=0)
    {
        elem *p=l->prim;
        while(p->urm!=0)
        {
            cout<<p->data<<" ";
            p=p->urm;
        }
        cout<<p->data<<" ";
    }

}
void stergere(lista *&l,int data)
{
    
}