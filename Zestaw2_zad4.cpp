#include <iostream>

int main (){

int a, b, c;
std::cin>>a>>b>>c;
if(c==b||b==a||a==c)
    {
        std::cout<<"at least two of these numbers are equal";
        }
else
{
    std::cout<<"none of these numbers are equal";
    }
return 0;
}
