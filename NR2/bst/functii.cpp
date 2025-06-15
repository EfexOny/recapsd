#include <iostream>
#include "functii.h"

using namespace std;


void insert(bst *&arb,int data){

    if(arb==0)
    {
        bst *n=new bst;
        n->data=data;
        n->drt=n->stg=0;
        arb=n;
        return ;
    }

    if(data<arb->data)
    {
        insert(arb->stg,data);
    }
    else
        if(data>arb->data)
        {
            insert(arb->drt,data);
        }
}

void stergere(bst *&arb,int data)
{
    if(data<arb->data)
    {
        stergere(arb->stg,data);
    }
    else
        if(data>arb->data)
        {
            stergere(arb->drt,data);
        }
        else
        {
            del(arb);
        }
}

void del(bst *&arb)
{
    if(arb->stg==0 && arb->drt==0)
    {
        delete(arb);
        arb=0;
        return ;
    }

    if(arb->stg && arb->drt==0){
        bst *c=arb;
        arb=c->stg;
        delete(c);
        return ;
    }

    if(arb->drt && arb->stg==0){
        bst *c=arb;
        arb=c->drt;
        delete(c);
        return ;
    }

    bst *parinte=arb;
    bst *fiu=arb->stg;

    while(fiu->drt!=0)
    {
        parinte=fiu;
        fiu=fiu->drt;
    }
    arb->data = fiu->data;
    if(parinte==arb)
    {
        parinte->stg=fiu->stg;
    }
    else
    {
        parinte->drt=fiu->stg;
    }
    delete fiu; 
}

void preordine(bst *arb)
{
    if(arb!=0)
    {
        cout<<arb->data<<" ";
        preordine(arb->stg);
        preordine(arb->drt);
    }
}