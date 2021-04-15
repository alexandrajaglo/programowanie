#include <iostream>

int main()
{
   int Sieve[999]={0};
   for (int i=2;i<999;i++)
    {
      for (int j=i*i;j<999;j+=i)
        {
         Sieve[j-1] = 1;
        }
   }
   std::cout<<"Primes under 999: ";
   for (int i=1;i<999;i++)
    {
      if (Sieve[i-1] == 0)
         std::cout<< i << ", ";
   }
   return 0;
}
