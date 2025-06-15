#include <iostream>
#include "functii.h"

using namespace std;


int inaltime(avl *s)
{
    if(s)
     return s->h;
}

int bf(avl *s)
{
    if(s)
        return inaltime(s->stg)-inaltime(s->drt);
}


void inserare(avl *s,int data)
{
    if(s==0){
        avl *n=new avl;
        n->data=data;
        n->drt=n->stg=0;
        n->h=1;
        s=n;
        return;
    }

    if(data < s->data)
    {
        inserare(s->stg,data);
    }
    else
        if(data >s->data){
            inserare(s->drt,data);
        }
        else
            return;

    s->h=1 + max(inaltime(s->stg),inaltime(s->drt));
    int ba = bf(s); 

    if(ba > 1 && data<s->stg->data)
    {
        RSD(s);
    }
    else
        if(ba > 1 && data > s->stg->data)
        {
            RSS(s->stg);
            RSD(s);
        }
        else
        if(ba < -1 && data > s->drt->data)
        {
            RSS(s);
        }
        else
        if(ba < -1 && data <s->drt->data)
        {
            RSD(s->drt);
            RSS(s);
        }
}