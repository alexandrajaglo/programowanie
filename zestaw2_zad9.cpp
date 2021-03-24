
#include <iostream>

int main (){

float t1, t2, m, profit;
std::cin>>t1>>t2>>m;
if(t1>=t2)
    {
        std::cout<<"Do nothing";
        }
else
{
    profit=(m/t1*(t2-t1));
    std::cout<<profit;
}
return 0;
}
