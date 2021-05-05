#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin>>n;

    int *A = new int [n];

    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        *(A+1)=rand()%10+1;
        std::cout<<*(A+1)<<" ";
    }

  return 0;
}
