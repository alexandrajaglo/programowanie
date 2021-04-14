#include<iostream>
#include<ctime>
#include<cstdlib>
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
        cout<<B[i]<<" ";
    }
    cout<<endl;
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
