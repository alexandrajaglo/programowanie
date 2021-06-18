#include <bits/stdc++.h>

using namespace std;

bool funkcja1 (int a, int b)
{
    int suma_a=1;
    for(int i=2; i<=a/2; i++)
    {
        if(n%1==0)
        {
            suma_a ++;
        }
    }
     int suma_b=1;
    for(int i=2; i<=b/2; i++)
    {
        if(n%1==0)
        {
            suma_b ++;
        }
    }

    return(a==suma_b && b==suma_a && a!=b);
}


int main()
{
    int c,d;
    cin>>c,d;
    cout<< funkcja1(c,d);

    return 0;
}
