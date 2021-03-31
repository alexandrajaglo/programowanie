#include <iostream>
using namespace std;

int main()
{
int a, b, c;
cout<< "pick two numbers: "<<endl;
cin>>a;
cin>>b;

while (b!=0)
{
    c=a%b;
    a=b;
    b=c;
}
cout<<"GCD= "<<a<<endl;
    return 0;
}
