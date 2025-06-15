#include <iostream>
#include "functii.h"
using namespace std;


void put(q *&coada,int data){
    if(coada==0)
    {
        q *n=new q;
        n->data=data;
        n->next=0;
        coada=n;
    }
    else
    {
        q *n=new q;
        n->data=data;
        n->next=0;

        q *parc=coada;
        while(parc->next!=0)
        {
            parc=parc->next;
        }
        parc->next=n;
    }
}

int front(q *coada){
    if(coada)
    {
        return coada->data;
    }
}

void get(q *&coada){
    if(coada!=0)
    {
        cout<<coada->data<<" ";
        coada = coada->next;
    }
}