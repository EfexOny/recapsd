#include <iostream>
#include "functii.h"

using namespace std;

int main()
{
    lista *l;
    l->prim=0;
    l->ultim=0;
    inserare(l,2);
    inserare(l,4);
    inserare(l,6);
    afisare(l);
    return 0;
}