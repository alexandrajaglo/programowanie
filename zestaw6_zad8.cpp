#include <bits/stdc++.h>

int main ()
{
    int n;
    std::cin>>n;

    int *A = new int [n];

    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        *(A+1)=rand()%11;
        std::cout<<*(A+1)<<" ";

    }
    std::cout<<std::endl;

    int x;
    for (int i=0; i<(n/2); i++)
    {
        x=*(A+i);
        *(A+i)=*(A+(n-(1+i)));
        *(A+(n-(1+i)))=x;
    }
    std::cout<<std::endl;
    for (int i=0; i<n; i++)
    {
        std::cout<<*(A+i)<<" ";
    }
    delete [] A;

return 0;
}

