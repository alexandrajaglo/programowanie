#include <bits/stdc++.h>
using namespace std;

int main()
{
    fstream file;
    string s;
    file.open("Jabberwocky.txt");

    while(getline(file, s))
    {
        cout<<s<<endl;
    }

    file.close();

    return 0;
}

