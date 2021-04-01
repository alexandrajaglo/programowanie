#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n;
cout << "pick a number of primes ";
cin >> n;
for (int j=1, i=2; j<=n; i++)
{
int a = 2;
    if (i == 2 ||i == 3)
    {
        j++;
        cout << i << " ";
    }
    else
    {
       while (a<= sqrt(i))
    {
        if (i % a == 0)
    {
        break;
    }
        ++a;
    }
         if (a > sqrt(i))
        {
            j++;
            std::cout <<i <<" ";
        }
    }
}
return 0;
    }
