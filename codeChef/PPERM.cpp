#include<iostream>
using namespace std;

void sieveEratosthenes(bool isPrime[],const int maxN)
{
    fill_n(isPrime,5000001,true);
    for(int i=2;i*i<=maxN;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=maxN;j+=i)
                isPrime[j]=false;
        }
    }
}

void computeCountP(int countPrimes[],const int maxN)
{
    static bool isPrime[maxN];
    sieveEratosthenes(isPrime,maxN);
    countPrimes[2]=1;
    for(int i=3;i<=maxN;i++)
    {
        countPrimes[i]=countPrimes[i-1]+isPrime[i];
    }
}



int main()
{
   const int maxN=5000001;

   static int countPrimes[maxN];//no. of primes less than or equal to the given index value
   static int pPerm[maxN];//no. of prime permutations

   return 0;
}
