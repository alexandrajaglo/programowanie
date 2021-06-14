#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,l;
    cin>>n;
    cin>>m;
    cin>>l;

    int D[n][m][l]={0};
    srand(time(NULL));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m;j++)
        {
            for(int k=0; k<l;k++)
            {
                *(*((*D+i)+j)+k)=rand()%100;
                cout<<D[i][j][k]<<" ";
            }
        }
        cout<<endl;
    }
delete [] D;
return 0;
}
