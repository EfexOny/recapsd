#include <iostream>
#include <fstream>
#include <math.h>
#include "functii.h"

using namespace std;

int main()
{
    q *coada=0;
    int matr[6][6];
    int sursa=0;
    put(coada,sursa);
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
        put(coada,i);
    }
    


    while(coada!=0)
    {
        int u = front(coada);
        get(coada); 

        for (int v = 0; v < 6; v++) {
            int w = matr[u][v];
            if (w > 0) {
                int alt = dist[u] + w;

                if (alt < dist[v]) {
                
                    dist[v] = alt;
                    put(coada, v);
                
                }
            }
        }
    }

        for(int i=0;i<6;i++)
        cout<<1<<" -- " <<i+1<<" :"<<dist[i]<<" "<<endl;

    return 0;
}