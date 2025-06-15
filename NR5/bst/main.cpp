#include <iostream>
#include "functii.h"

using namespace std;

int main()
{
    bst *b=0;
    inserare(b,20);
    inserare(b,15);
    inserare(b,13);
    inserare(b,18);
    inserare(b,17);
    preord(b);
    cout<<endl;
    stergere(b,15);
    preord(b);

}