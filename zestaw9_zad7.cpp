#include <bits/stdc++.h>
using namespace std;

string bin2dec(string s)
{
    int number=0;
    int pom=1;

    for(i=0;i<s.length()/2;i++)
    {
        if(s[i]=='1')
        {
            s.length()+=pom;
        }
        pom*=2;
    }
    return to_string(s.length);
}
int main()
{
    string a;
    cin>>a;
    cout<< bin2dec(a);

    return 0;
}

