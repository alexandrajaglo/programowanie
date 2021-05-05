#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n;
    srand(time(NULL));
    int *A = new int [n];
    std::cin>>n;
    int highest_number=*A;

    for(int i=0; i<n; i++)
    {
        *(A+1)=rand()%10+1;
        std::cout<<*(A+1)<<" ";
         if (*(A+1)>*(A))
        {
            highest_number=*(A+1);
        }
    }
    std::cout<<std::endl;

    cout<<"Highest number is "<<highest_number<<endl;

    return 0;
}

