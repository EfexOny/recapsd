#include <iostream>
#include "functii.h"

using namespace std;


// dubla inserare, normala dupa primul element sau daca where e diferit de -1 o sa cautam elementul si il inseram dupa el
void si_insert(lista *&l,int data,int where)
{
    if(l==0)
    {
        l=new lista;
        l->data=data;
        l->urm=0;
    }
    else
    {
        if(where==-1){
            lista *elem=new lista;
            elem->data=data;
            elem->urm=0;
            
            lista *p=l;
            while(p->urm!=0)
            {
                p=p->urm;
            }
            p->urm=elem;
        }
        else
        {
            lista *elem=new lista;
            elem->data=data;
            lista *p=l;
            while(p->urm!=0 && p->data!=where)
            {
                p=p->urm;
            }   
                elem->urm=p->urm;
                p->urm=elem;
        }
    }
}

void si_afisare(lista *l)
{
    if(l!=0)
    {
        while(l->urm!=0)
        {
            cout<<l->data<<" ";
            l=l->urm;
        }
        cout<<l->data<<" ";

    }
}

void si_stergere(lista *&l,int data)
{
    if(l!=0)
    {
        lista *p=l;
        if(p->data==data)
        {
            l=p->urm;
            delete(p);
        }
        else
        {
            while(p->urm!=0 && p->urm->data!=data)
            {
                p=p->urm;
            }
            lista *l=p->urm;
            p->urm=l->urm;
            delete(l);
        }
    }
}




// ==============================================================================================================================

void sc_insert(lista *&l,int data)
{
    if(l==0)
    {
        lista *elem=new lista;
        elem->data=data;
        elem->urm=elem;
        l=elem;
    }
    else
    {
        lista *primu=l;
        lista *p=l;
        while(p->urm != primu)
        {
            p=p->urm;
        }
        lista *elem=new lista;
        elem->data=data;
        p->urm=elem;
        elem->urm=primu;
    }
}
void sc_afisare(lista *l)
{
    if(l!=0)
    {
    lista *primu=l,*parcurgere=l;
    while(parcurgere->urm!=primu)
    {
        cout<<parcurgere->data<<" ";
        parcurgere=parcurgere->urm;
    }
    cout<<parcurgere->data<<" ";
    }
}

void sc_stergere(lista *&l,int data)
{
    lista *primu=l,*parc=l;
    if(l->data==data)
    {
        l=l->urm;
    }
    else
    {
        while(parc->urm!=primu && parc->urm->data!=data)
        {
            parc=parc->urm;
        }
         lista *da=parc->urm;
        parc->urm=da->urm;
        delete(da);
    }
}

