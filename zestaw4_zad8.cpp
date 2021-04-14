#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int B[12];
    srand(time(NULL));
    for(int i=0; i<=11; i++)
    {
        B[i]=rand()%10+1;
    }
    for(int j=11;j>1;j--)
    {
        bool sorted = true;
        {
    int tmp;
    for(int i=0;i<j;i++)
    {
        if (B[i]>B[i+1])
        {
        tmp=B[i];
        B[i]=B[i+1];
        B[i+1]=tmp;
        sorted=false;
        }
    }

    for(int elem:B) std::cout<<elem<<" ";
        std::cout<<endl;
        if (sorted)
        {
        break;
        }
        }
    }
    int size;
    int value = B[0];
    int mode = value;
    int count = 1;
    int countMode = 1;

for (int i=1; i<size; i++)
{
      if (B[i] == value)
      {
         ++count;
      }
      else
      {
        if (count > countMode)
        {
        countMode = count;
        mode = value;
        }
        count = 1;
        value = B[i];
  }
}

cout << "Mode = " << mode << endl;
    return 0;
}
