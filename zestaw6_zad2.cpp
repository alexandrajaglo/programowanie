#include<iostream>

int main()

{
    int n;
    int x=1;

    std::cin>>n;
    int *ptr = new int [n];

    for (int i = 0; i<n; (i++))
    {
       std::cin>>*(ptr+i);
    }
    for (int i = 0; i<n; (i++))
    {
       if(*(ptr+1)<0)
       {
           *(ptr+1)=0;
       }
       std::cout << *(ptr+i)<<" ";
    }

    delete [] ptr;

    return 0;
}

