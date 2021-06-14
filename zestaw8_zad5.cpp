#include <iostream>

using namespace std;

long long silnia(int n)
{
    if (n<1)
    {
        return 1;
    }
    return n*silnia (n-2);

int main ()
{
int a;
cin >> a;
silnia (a);
cout << silnia (a);

return 0;
}
