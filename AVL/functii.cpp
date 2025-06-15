#include <iostream>
#include "functii.h"

using namespace std;

/*
    Diferit e faptul ca nu ai balance factor in structura si un h(inaltimea) si ai functie care iti calculeaza bf-u.
    Tu practic
*/

int inaltime(avl *a)
{
    if(a!=0)
        return a->h;
    return 0;
}

int bf(avl *a)
{
    if(a!=0)
        return inaltime(a->st)-inaltime(a->dr);
    return 0;
}

void insert(avl *&a,int data)
{
    if(a==0)
    {
        avl *n=new avl;
        n->data=data;
        n->dr=n->st=0;
        a=n;
        a->h=1;
        return;
    }

    if(data < a->data)
        insert(a->st,data);
    else
        if(data > a->data)
            insert(a->dr,data);
        else
            return;
    
    a->h=1 + max(inaltime(a->st),inaltime(a->dr));
    int balc = bf(a);

    if(balc > 1 && data<a->st->data)
    {
        RSD(a);
    }   
    else
        if(balc >1 && data>a->st->data)
        {
            RSS(a->st);
            RSD(a);
        } 
        else
            if(balc < -1 && data > a->dr->data)
            {
                RSS(a);
            }
                else
                    if(balc < -1 && data < a->dr->data)
                    {
                        RSD(a->dr);
                        RSS(a);
                    }
            
}

void RSD(avl *&a)
{
    avl *x=a->st;
    a->st=x->dr;
    x->dr=a;

    a->h=1 + max(inaltime(a->st),inaltime(a->dr));
    x->h=1 + max(inaltime(x->st),inaltime(x->dr));

    a=x;
}

void RSS(avl *&a)
{
    avl *x=a->dr;
    a->dr=x->st;
    x->st=a;

    a->h=1 + max(inaltime(a->st),inaltime(a->dr));
    x->h=1 + max(inaltime(x->st),inaltime(x->dr));
    
    a=x;
}

void preordine(avl *a)
{
    if(a!=0){
    cout<<a->data<<" ";
    preordine(a->st);
    preordine(a->dr);
    }
}