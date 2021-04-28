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

    float sum_i, sum_j;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b;j++)
        {
           sum_i += C[i][j];
           sum_j += C[j][i];

        }
        cout<<"srednia wiersza :"<<sum_i/a<<" "<<endl;
        cout<<"srednia kolumny: "<<sum_j/b<<" "<<endl;
    }


return 0;
}
