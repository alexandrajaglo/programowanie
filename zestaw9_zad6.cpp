#include <bits/stdc++.h>
using namespace std;

bool pesel(string s)
{
    if (s.size()!=11)
    {
        return false;
    }
    int sum =0;
    for(int i=0; i<s.size(); i++)
    {
        int pom =s[i];
        if(i==0||i==4||i==8||i=10)
        {
            sum+=pom;
        }
        else if(i==3||i=7)
        {
            sum+=pom*9;
        }
        else if(i==2||i==6)
        {
            sum+=pom*7;
        }
        else if(i==1||i==5||i==9)
        {
            sum+=pom*3;
        }
    }
    return sum %10==0;
}
int main()
{
    string a;
    cin>>a;
    if (pesel(a))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false';
    }
    return 0;
}

