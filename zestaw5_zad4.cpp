#include <bits/stdc++.h>

using namespace std;


int main()
{
    const int a = 7;
    const int b = 7;
    int C[a][b];
    srand(time(NULL));
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b;j++)
        {
           C[i][j]=rand()%21-10;
           cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    int pom[a][b]={0};
    cout<<"macierz odwrocona: "<<endl;
    for(int i=0;i<a;i++)
    {
        for(int j=i+1; j<b;j++)
        {
             pom[i][j]=C[i][j];
             C[i][j]=C[j][j];
             C[j][i]=pom[i][j];
        }
        cout<<endl;
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout<< C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
