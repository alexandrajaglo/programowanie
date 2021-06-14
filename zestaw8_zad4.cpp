#include <bits/stdc++.h>

using namespace std;

int Fibonacci(int n)
{
    int x=0, y=1, z;
     for (int i=n; i>0; i--)
     {
         z=y+x;
         X=y;
         y=z;
     }
     return x;
int main()
{
    int x;
    cin >> x;
    cout << Fibonacci (x);

    return 0;
}
