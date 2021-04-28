
#include <bits/stdc++.h>


int main()
{
    const int a = 7;
    const int b = 7;
    int B[a][b];
    srand(time(NULL));
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b;j++)
        {
           B[i][j]=rand()%21-10;
        }
    }
    int highest_number=B[0][0];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b;j++)
        {
            std::cout<<B[i][j]<<" ";
            if (B[i][j]>highest_number)
        {
            highest_number=B[i][j];
        }
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<highest_number;

    return 0;
}
