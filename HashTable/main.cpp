#include <iostream>
#include "functii.h"

using namespace std;

int main()
{
    int M=11;
    hashh *B[11];
    init(B,M);
    insert(B,M,"bicicelta");
    insert(B,M,"novelalls");
    insert(B,M,"darius");
    insert(B,M,"marius");
    afisare(B,M);
    return 0;
}