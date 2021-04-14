#include<iostream>

int main()
{
    int n;

    std::cout<<"Pick a number: "<<std::endl;
    std::cin>>n;

    int A[5]={1,3,5,7,9},B[5];

    for(int ia=0; ia<5; ia++)
    {
        B[(ia+n)%5]=A[ia];
    }
    for(int ib =0; ib<5; ib++)
    {
        std::cout<<B[ib]<<" ";
    }



    return 0;
}
