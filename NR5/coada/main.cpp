#include <iostream>
#include "functii.h"

using namespace std;

int main()
{
    coada *c;
    init(c);
    put(c,4);
    put(c,5);
    get(c);
    cout<<front(c);

}