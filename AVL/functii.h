#pragma once 


struct avl{
    int data,h;
    avl *st,*dr;
};


int inaltime(avl *a);
int bf(avl *a);
void insert(avl *&a,int data);
void RSD(avl *&a);
void RSS(avl *&a);
void preordine(avl *a);

