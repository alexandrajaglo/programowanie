#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    fstream input,output;
    string s;

    input.open("palindromy.txt", ios::in);
    output.open("ymordnilap.txt",ios::out);

    while(getline(input, s))
    {
        if(s[0]=='"')
        {
            reverse(s.begin(),s.end())
        }
        output<<s<<endl;
    }

    input.close();
    output.close();

    return 0;
}

