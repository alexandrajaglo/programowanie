#include <bits/stdc++.h>
using namespace std;

int main()
{
    time_t current_time=time(0)

    fstream file ("time.txt", ios::out);
    file<<asctime(localtime(&current_time));

    file.close();

    return 0;
}

