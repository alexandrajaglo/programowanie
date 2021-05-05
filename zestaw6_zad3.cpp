#include<iostream>

int main()

{
    int n;
    int sum=0;

    std::cin>>n;
    int *ptr = new int [n];
    int i=0;
    for (; i<n; (i++))
    {
       std::cin>>*(ptr+i);
       sum=sum+(*(ptr+1));
       if(sum>100)
       {
           break;
       }
    }
    if(sum>0)
       {
           while(i<n)
           {
           *(ptr+1)=0;
           i++;
           }
       }
       for (int j = 0; j<n; (j++))
        {
       std::cout << *(ptr+j)<<" ";
        }

    delete [] ptr;

    return 0;
}
