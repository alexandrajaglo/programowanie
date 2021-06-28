#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    for(i=0, i,i<s.length()/2;i++)
    {
        swap(s[i],s[s.length-1-i]);
    }
    return s;
}
int main()
{
    string a;
    cin>>a;
    cout<< reverse(a);

    return 0;
}

