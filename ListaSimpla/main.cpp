#include <iostream>
#include "functii.h"

using namespace std;

int main()
{
    lista *l=0;
    // si_insert(l,2,-1);
    // si_insert(l,4,-1);
    // si_insert(l,5,-1);
    // si_insert(l,8,4);
    // si_stergere(l,2);
    // si_afisare(l);

    sc_insert(l,2);
    sc_insert(l,33);
    sc_insert(l,4);
    sc_insert(l,5);
    sc_stergere(l,33);
    sc_afisare(l);


}