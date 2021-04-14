#include <iostream>
#include <cmath>

int main ()
{
int A[5] = {1,3,5,7,9};
//Arithmetic mean
int sum, arithmetic;

for(int i=0; i<5; i++)
{
    sum += A[i];
}
arithmetic = sum/5;
std::cout<<"Arithmetic mean = "<<arithmetic<<std::endl;

//Geometric mean
int iloczyn = 1;
float geo;
for(int i=0; i<5; i++)
{
    iloczyn *= A[i];
}
geo = pow(iloczyn, 0.2);
std::cout<<"Geometric mean = "<<geo<<std::endl;

//Root mean square
int sum_of_squares = 0;
float root;
for(int i=0; i<5; i++)
{
    sum_of_squares += A[i]*A[i];
}
root = pow(sum_of_squares/5,0.5);
std::cout<<"Root mean square = "<<root<<std::endl;

//Harmonic mean
float sum_of_the_reciprocals =0;
float har;
for(int i=0; i<5; i++)
{
    sum_of_the_reciprocals += pow(A[i],-1);
}
har = pow(sum_of_the_reciprocals/5, -1);
std::cout<<"Harmonic mean = "<<har<<std::endl;
return 0;
}
