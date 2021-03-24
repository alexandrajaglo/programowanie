#include <iostream>

int main (){

int a, b, c;
std::cin>>a>>b>>c;
if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        std::cout<<"triangle can be build out of given sides lengths";
        }
else
{
    std::cout<<"triangle can not be build out of given sides lengths";
    }
return 0;
}
