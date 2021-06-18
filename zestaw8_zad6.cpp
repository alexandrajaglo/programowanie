#include <bits/stdc++.h>
using namespace std;
 long long silnia_iteracja (int n)
 {
      long long silnia = 1;
      for (int i = n; i > 1; i -= 2)
        {
            silnia *= i;
        }
            return silnia;
}
int main()
{
    int n;
    cin >> n;
    cout << silnia_iteracja(n);

