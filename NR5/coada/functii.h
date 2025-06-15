#pragma once    

#define dimmax 11

struct coada{
    int vect[dimmax];
    int head,tail;
};


void init(coada *&c);
void put(coada *&c,int data);
void get(coada *&c);
int nextPos(int index);
int isEmpty(coada *c);
int isFull(coada *c);
int front(coada *c);
