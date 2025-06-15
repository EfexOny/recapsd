#pragma once    

struct bst{
    int data;
    bst *st,*dr;
};

void inserare(bst *&b,int data);
void preord(bst *b);
void stergere(bst *&b,int data);
void delRoot(bst *&b);