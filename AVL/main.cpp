#include <iostream>
#include "functii.h"

using namespace std;

int main()
{
    avl *a=0;
    insert(a,10);
    insert(a,20);
    insert(a,30);
    insert(a,25);
    insert(a,28);

    preordine(a);
}