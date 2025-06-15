#pragma once    

struct stiva{
    int data;
    stiva *next;
};  


void push(stiva *&s,int data);
void pop(stiva *&s);
int top(stiva *s);
void init(stiva *&s);
int isEmpty(stiva *s);
