#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


int main()
{
    const int a = 7;
    const int b = 7;
    int B[a][b];
    srand(time(NULL));
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b;j++)
        {
           B[i][j]=rand()%21-10;
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b;j++)
        {
            std::cout<<B[i][j]<<" ";

        }
        std::cout<<std::endl;
    }


    return 0;
}
