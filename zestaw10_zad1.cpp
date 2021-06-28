#include <bits/stdc++.h>
using namespace std;

int main()
{
    fstream file("Jabberwocky.txt");
    string s;
    int ctr=0;

    while(file>> s)
    {
        ctr++;
    }

    cout<<ctr;
    file.close();

    return 0;
}

