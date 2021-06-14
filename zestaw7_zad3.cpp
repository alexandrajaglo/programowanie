#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n;
    cin>>m;
    int *A = new int [n];
    int *B = new int [m];
    int *C = new int [n+m];

    for (int i=0; i<n; i++)
    {
        cin>>*(A+i);
    }
    for (int i=0; i<m; i++)
    {
        cin>>*(B+i);
    }


 for (int i = 0; i < (n+m); i++)
    {
        *(C+i) = 0;
    }
 for (int i = 0; i < m+1; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
             *(C+(i+j)) += (*(A+i)) * (*(B+j)));
        }
    }
 for (int p = 0; p<(n+m); p++)
    {
         cout << (C + p) <<" ";
    }
 delete[] A;
 delete[] B;
 delete[] C;

}

    return 0;
}


