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

    for (int i=0,j=0,k=0; i<(n+m); i++)
        {
            if(*(A+j)>=*(B+k))
            {
                *(C+i)=*(B+k);
                k++;
            }
            else
            {
                *(C+i)=*(A+j);
                j++;
            }
            if (j>=n||k>=m)
            {
                i++;
                while(j<n)
                {
                    *(C+i)=*(A+j);
                    j++;
                    i++;
                }
                while (k<m)
                {
                    *(C+i)=*(B+k);
                    k++;
                    i++;
                }
                break;
            }
        }
        for (int i=0; i<(n+m); i++)
        {
            cout<<C[i];
        }


    return 0;
}

