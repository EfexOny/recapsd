#include <iostream>
#include "functii.h"

using namespace std;

int main()
{
    stiva *s;
    init(s);
    push(s,2);
    push(s,4);
    cout<<top(s);
    pop(s);
    cout<<top(s);
}