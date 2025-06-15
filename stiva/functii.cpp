#include <iostream>
#include "functii.h"

using namespace std;

void push(stiva *&s,int data)
{
    stiva *p=new stiva;
    p->data=data;
    p->next=s;
    s=p;
}
void pop(stiva *&s)
{
    if(!isEmpty(s))
    {   
        stiva *p=s;
        s=s->next;
        delete(p);

    }
}
int top(stiva *s)
{
    if(!isEmpty(s))
    {
         return s->data;
    }
    else
    {
        return 0;
    }
}
void init(stiva *&s)
{
    s=0;
}
int isEmpty(stiva *s)
{
    if(s==0)
        return 1;
    else
        return 0;
}