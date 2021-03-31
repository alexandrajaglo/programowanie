#include <iostream>
using namespace std;

int main ()
{
int n;
float x=1;
cout<<"pick a number "<<endl;
cin>>n;

for(int i=n;i>1;i--)
{
    x*=i;
}
cout<<x<<endl;
return 0;
}
