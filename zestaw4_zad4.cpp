#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int B[12];
    srand(time(NULL));
    for(int i=0; i<12; i++)
    {
        B[i]=rand()%10+1;
    }
    for(int i=0; i<12; i++)
    {
        std::cout<<B[i]<<" ";
    }




    return 0;
}
