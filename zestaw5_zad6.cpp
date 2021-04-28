#include <bits/stdc++.h>

using namespace std;


int main()
{
    const int n = 20;
    const int m = 3;
    int D[n][n][m]={0};
    srand(time(NULL));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++)
        {
            for(int k=0; k<m;k++)
            {
                D[i][j][k]=rand()%255-1;
                cout<<D[i][j][k]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
