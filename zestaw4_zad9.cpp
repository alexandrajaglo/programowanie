#include <iostream>

int main()
{
   int Sieve[200]={0};
   for (int i=2;i<200;i++)
    {
      for (int j=i*i;j<200;j+=i)
        {
         Sieve[j-1] = 1;
        }
   }
   std::cout<<"Primes under 200: ";
   for (int i=1;i<200;i++)
    {
      if (Sieve[i-1] == 0)
         std::cout<< i << ", ";
   }
   return 0;
}
