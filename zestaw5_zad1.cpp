
#include <bits/stdc++.h>



int main()
{
    const int a = 7;
    const int b = 7;
    int sum=0;
    int B[a][b];
    srand(time(NULL));
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b;j++)
        {
           B[i][j]=rand()%21-10;
            std::cout<<B[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b;j++)
        {
           sum+=B[i][j];
        }
    }
    std::cout<<sum;
    std::cout<<std::endl;

    return 0;
}
