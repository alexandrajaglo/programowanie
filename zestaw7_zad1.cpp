#include <bits/stdc++.h>

int main()
{

    int *p = new int A[5]{1,2,3,4,5};
    int *r = new int B[5]{101,102,103,104,105};

    int pom;
    int *pom=&pom;

    for (int i=0, i<5, i++)
    {
        *pom=*(p+i);
        *(p+i)=*(r+i);
        *(b+i)=*pom;

        for(int j=0; j<5; j++)
        {
            std::cout<<A[j];
        }
        std::cout<<endl;

        for(int j=0;j<5;j++)
        {
            std::cout<<B[j];
        }

    }

    return 0;
}
