#include <iostream>

int main (){

int a, b, c;
std::cin>>a>>b>>c;
if(a>b && a>c)
    {
        std::cout<<"biggest number is "<<a;
        }
else if(a<b && b>c)
    {
        std::cout<<"biggest number is "<<b;
        }
else
{
    std::cout<<"biggest number is "<<c;
    }
return 0;
}
