#include <bits/stdc++.h>

using namespace std;


int main()
{
    const int n = 7;
    int T[n][n]={0};

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i;j++)
        {

            if(j==i||j==0)
            {
                T[i][j]=1;
            }
            else
            {
                T[i][j]=T[i-1][j-1]+T[i-1][j];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
