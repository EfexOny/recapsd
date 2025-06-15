#include <iostream>
#include "functii.h"

using namespace std;

int main(){
    bst *b=0;
    insert(b,6);
    insert(b,10);
    insert(b,3);
    insert(b,1);
    insert(b,4);
    insert(b,5);
    insert(b,9);
    insert(b,7);
    insert(b,12);
    preordine(b);
    stergere(b,10);
    cout<<endl;
    preordine(b);

    return 0;
}