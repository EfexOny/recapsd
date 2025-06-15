#include <iostream>
#include "functii.h"

using namespace std;

int main()
{
    heap *h=new heap;

    inserare(8,h,11);
    inserare(5,h,11);
    inserare(2,h,11);
    inserare(10,h,11);
    inserare(12,h,11);
    inserare(15,h,11);


    for(int i=1;i<h->last;i++)
        cout<<h->h[i]<<" ";
    cout<<endl;

    remove(h);

    
    for(int i=1;i<h->last;i++)
        cout<<h->h[i]<<" ";

    return 0;
}