#include <bits/stdc++.h>
using namespace std;

bool dirty(string s)
{
    string cyfry ="1234567890"
    string znaki_specjalne ="!@#$%^&*()"
    for(int i=0; i<s.length();i++)
    {
        for(int j=0; j<10; j++)
        {
            if(s[i]==cyfry[j])
            {
                return true;
            }
        }
    }
    for(int i=0; i<s.length();i++)
    {
        for(int j=0; j<10; j++)
        {
            if(s[i]==znaki_specjalne[j])
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    string a;
    cin>>a;
    cout<< dirty(a);

    return 0;
}

