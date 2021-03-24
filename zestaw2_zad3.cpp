
#include <iostream>

int main (){

int a, b, c;
std::cin>>a>>b>>c;
if(c>=b&&b>=a)
    {
        std::cout<<"descending sequence";
        }
else{
        std::cout<<"non-descending sequence";
        }
return 0;
}
