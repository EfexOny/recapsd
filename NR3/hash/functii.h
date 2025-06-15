#pragma once
#include <string>

#define M 11

using namespace std;

struct lista{
    lista *next;
    int pret;
    string nume;
};

void inserare(lista *&list,int data,string nume);
void  afisare(lista *list);

struct b{
    string denumire;
    b *next;
};

void hash_inserare(b *h[],lista *l);
int hash_function(string denumire);
