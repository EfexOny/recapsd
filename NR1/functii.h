#pragma once;

struct avl{
    int data,h;
    avl *stg,*drt;
};

int inaltime(avl *s);
int bf(avl *s);
void inserare(avl *s,int data);