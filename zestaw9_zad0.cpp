#include <bits/stdc++.h>
using namespace std;

bool pal(string s)
{
    for(i=0; i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-i-1])
        {
            return false;
        }
        return true;
    }
}
int main()
{
    string a;
    cin>>a;
    cout<< pal(a);

    return 0;
}

