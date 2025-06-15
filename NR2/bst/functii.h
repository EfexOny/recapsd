#pragma once

using namespace std;

struct bst{
    int data;
    bst *stg,*drt;
};

void insert(bst *&arb,int data);
void preordine(bst *arb);
void stergere(bst *&arb,int data);
void del(bst *&arb);