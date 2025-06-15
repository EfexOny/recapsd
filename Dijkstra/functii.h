#pragma once

struct q{
    int data;
    q *next;
};

void put(q *&coada,int data);
void get(q *&coada);
int front(q *coada);
