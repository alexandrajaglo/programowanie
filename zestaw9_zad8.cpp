#include <bits/stdc++.h>
using namespace std;

string dec2bin(string s)
{
    int number=0;
    int x=stoi(s)
    string pom;

    while(x>=1)
    {
        number=x%2;
        x/=2
        pom=to_string(number)+pom;
    }
    return pom;
}
int main()
{
    string a;
    cin>>a;
    cout<< dec2bin(a);

    return 0;
}

