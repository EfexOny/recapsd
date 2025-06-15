#pragma once

struct elem{
    int data;
    elem *urm,*pred;
};

struct lista{
    elem *prim,*ultim;
};

void inserare(lista *&l,int data);
void afisare(lista *l);
void stergere(lista *&l,int data);