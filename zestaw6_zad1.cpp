#include<iostream>

int main()

{
    int n;
    int x=1;

    std::cin>>n;
    int *ptr = new int [n];

    for (int i = 0; i<n; (i++))
    {
        x=x*2;
        *ptr =x;
        std::cout<<*ptr<<std::endl;
    }

    delete [] ptr;

    return 0;
}
