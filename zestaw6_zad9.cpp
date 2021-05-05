#include <bits/stdc++.h>

int main()
{
    int n;
    int m;

    std::cin>>n>>m;

    int *A = new int [n];
    int *B = new int [n];

    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        *(A+1)=rand()%10+1;
        std::cout<<*(A+1)<<" ";
    }

    for(int ia=0; ia<n; ia++)
    {
        *(B+(ia+m)%n)=*(A+1);
    }
    for(int ib =0; ib<n; ib++)
    {
        std::cout<<*(B+1)<<" ";
    }
    delete[] A;
    delete []B;


    return 0;
}
