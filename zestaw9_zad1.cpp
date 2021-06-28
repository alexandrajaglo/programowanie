#include <bits/stdc++.h>
using namespace std;

string first(string s1, string s2)
{
    if(s1>s2)
    {
        return s2;
    }
    else
    {
        return s1;
    }
}
int main()
{
    string a;
    string b;
    cin>>a>>b;
    cout<< first(a,b);

    return 0;
}

