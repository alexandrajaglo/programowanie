#include <iostream>

using namespace std;

int main (){

int score;
cin>>score;
if(100>=score&&90<=score)
    {
cout<< "bdb";
}
else if(90>score && score>=80)
{
    cout<< "db+";
}
else if(80>score && score>=70)
{
    cout<< "db";
}
else if(70>score && score>=60)
{
    cout<< "dst+";
}
else if(60>score && score>=50)
{
    cout<< "dst";
}
else if(50>score && score>=0)
{
    cout<< "ndst";
}
return 0;

}
