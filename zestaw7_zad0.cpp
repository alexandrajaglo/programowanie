#include <bits/stdc++.h>

int main()
{
    int x=5;
    int y=7;

    int *p = &x;
    int *r = &y;

    int pom = *p;
    *p=*r;
    *r=pom;

    std::cout<<x<<" "<<y;

    return 0;
}
