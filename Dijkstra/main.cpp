#include <iostream>
#include <fstream>
#include <math.h>
#include "functii.h"

using namespace std;

int main()
{
    int matr[6][6];
    int sursa=0;
    ifstream f("input.txt");
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
        {
            f>>matr[i][j];
        }

    int v[6]={0};
    int dist[6];
    dist[0]=0;
    for(int i=1;i<6;i++)
    {
        dist[i]=999;
    }
    for(int i=0;i<6;i++)
    {

      

        v[i]=1;
        
        cout<<"iter:"<<i<<endl;
        for(int i=0;i<6;i++)
         cout<<dist[i]<<" ";
        cout<<endl;
    }

    return 0;
}