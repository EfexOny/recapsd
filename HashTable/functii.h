#include <string>
#pragma once

using namespace std;

struct hashh{
    string cheie;
    hashh *next;
};

void init(hashh *H[],int M);
int hh(string cuvant);
void afisare(hashh *H[],int M);
void insert(hashh *H[],int M,string cuvant);