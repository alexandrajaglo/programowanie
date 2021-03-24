#include <iostream>
#include <cmath>

int main (){

float x1,y1,x2,y2,r1,r2;
std::cin>>x1>>y1>>r1>>x2>>y2>>r2;
if((sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))<=r1+r2)
    {
        std::cout<<"kola maja niepuste przeciecie";
        }
else
    {
      std::cout<<"koła mają puste przecięcie";
    }
return 0;
}
