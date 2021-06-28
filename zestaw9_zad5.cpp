#include <bits/stdc++.h>
using namespace std;

string filter(string s, char k)
{
    string s1="";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!=k)
        {
            s1+=s[i];
        }
    }
    return s1;
}
int main()
{
    string a;
    char b;
    cin>>a;
    cin>>b;
    a=filter(a,b);
    cout<<a;
    cout<< a.length();

    return 0;
}

