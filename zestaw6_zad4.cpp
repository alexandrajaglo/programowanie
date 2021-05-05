#include<iostream>

int main()

{
    int n;
    int x=1;

    std::cin>>n;
    int *ptr = new int [n];
    int *ptr1 = new int [n];
    for (int i = 0; i<n; (i++))
    {
       std::cin>>*(ptr+i);
       *(ptr1+1)=*(ptr+1)%3;
    }
    for (int i = 0; i<n; (i++))
    {
       std::cout << *(ptr+i)<<" ";
    }
    std::cout<<std::endl;
     for (int i = 0; i<n; (i++))
    {
       std::cout << *(ptr1+i)<<" ";
    }

    delete [] ptr;
    delete [] ptr1;
    return 0;
}

