#include <iostream>
using namespace std;

int main (){
int a, b, c, n;
a=0;
b=1;
cout <<"n= ";
cin>>n;
if(n>=0)
{
  for(int x=0; n>x;x++)
  {
      cout << a << " ";
      c=b;
      b+=a;
      a=c;
  }
}


return 0;
}
