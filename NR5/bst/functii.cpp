#include <iostream>
#include "functii.h"

using namespace std;

void inserare(bst *&b,int data)
{
    if(b==0)
    {
        bst *p=new bst;
        p->data=data;
        p->dr=0;
        p->st=0;
        b=p;
        return ;
    }

    if(data<b->data)
    {
        inserare(b->st,data);
    }
    else
    {
        inserare(b->dr,data);
    }
    
}
void preord(bst *b)
{
    if(b!=0){
    cout<<b->data<<" ";
    preord(b->st);
    preord(b->dr);
    }

}

void stergere(bst *&b,int data)
{
    if(b==0)
        return;
    
    if(data<b->data)
        stergere(b->st,data);
    else
        if(data>b->data)
            stergere(b->dr,data);
            else
            delRoot(b);
}

void delRoot(bst *&b)
{
    bst *temp;
    if(b->dr==0 && b->st==0)
        {
            delete(b);
            b=0;
            return;
        }
    
    if(b->dr==0)
    {
        b=b->st;
        return;
    }

    if(b->st==0)
    {
        b=b->dr;
        return;
    }

    bst *parinte = b;
    bst *temp2=b->st;

    while(temp2->dr!=0) 
    {
        parinte=temp2;  
        temp2=temp2->dr;
    }

    if(temp2->dr==0 && temp2->st==0)
    {
        temp2->dr=b->dr;
        b=temp2;
        return;
    }

}


