#include <iostream>

int main()
{
   int Sieve[1000]={0};
   for (int i=2;i<1000;i++)
    {
      for (int j=i*i;j<1000;j+=i)
        {
         Sieve[j-1] = 1;
        }
   }
   std::cout<<"Primes under 1000: ";
   for (int i=1;i<1000;i++)
    {
      if (Sieve[i-1] == 0)
         std::cout<< i << ", ";
   }
   return 0;
}
