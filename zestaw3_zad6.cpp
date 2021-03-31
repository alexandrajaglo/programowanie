#include <iostream>
using namespace std;

int main()
{
int x;
cout<<"pick a number: "<<endl;
cin >> x;
if (x==1)
    {
     cout<<"The number is prime"<<endl;
    }
    else
    {
for (int i=2; i<=x; i++)
    {
    if (x%i==0)
    {
        if (i==x)
            {
            cout<<"The number is prime"<<endl;
            }

        else
        {
            cout<<"The number isn't prime"<<endl;
        }
                break;
            }

            }

    }

    return 0;
}
