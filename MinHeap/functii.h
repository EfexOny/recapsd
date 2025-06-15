#pragma once


using namespace std;

struct heap
{
    int h[15];
    int last=1;
};

void inserare(int data,heap *h,int size);
void remove(heap *h);