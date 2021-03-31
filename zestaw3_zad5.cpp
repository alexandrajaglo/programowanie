#include <iostream>
using namespace std;
int main ()
{
   int a, b, c, d, e;
cout<< "pick two numbers: "<<endl;
cin>>a;
cin>>b;
d=a;
e=b;
while (b!=0)
{
    c=a%b;
    a=b;
    b=c;
}

int gcd=a;
int lcm = (d*e)/gcd;
cout<< "LCM = " <<lcm<<endl;
return 0;
}
