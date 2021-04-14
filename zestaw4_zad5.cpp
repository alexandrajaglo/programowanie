#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int B[12],highest_number;
    srand(time(NULL));
    for(int i=0; i<12; i++)
    {
        B[i]=rand()%10+1;
    }
    for(int i=0; i<12; i++)
    {
        cout<<B[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<12; i++)
    {
        if (B[i]>highest_number)
        {
            highest_number=B[i];
        }
    }
    cout<<"Highest number is "<<highest_number<<endl;

    return 0;
}
