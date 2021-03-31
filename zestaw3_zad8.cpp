#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{
int guess, x;
int i=0;
srand(time(NULL));
x=rand()%101;

while(x!=guess)
    {
        i++;
cout<<"guess the number (1-100)";
 cin>>guess;
if(guess==x)
{
    cout<<"congratulations! you won in attempt number " << i << endl;
    break;
}
if (guess<x)
{
    cout<< "the number is higher"<<endl;
}
if(guess>x)
{
    cout<< "the number is lower"<<endl;
}
if (i==10)
{
    cout<< "you lose. too many attempts. the number was "<<x<<endl;
    exit(0);
}
 }

return 0;
}
