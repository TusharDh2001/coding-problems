#include <bits/stdc++.h>
using namespace std;


int retPrime(int n)
{
    //Using sieve of Eratosthenes to generate primes 
    int size = n + 1;
    bool Primes[100];
    int count = 0;
    memset(Primes, true, sizeof(Primes));
    for (int i = 2; i<sqrt(100); ++i)
    {
        if (Primes[i] == true)
        {
            for (int j = i * 2; j <= 100; j = j + i)
            {
                Primes[j] = false;
            }
        }
    }
    int primeIndex=0;
    int i = 2;
    while (count != n)
    {
        if (Primes[i] == true)
        {
            count++;
            primeIndex = i;
        }
        ++i;
    }
    return primeIndex;
}

int retFib(int n)
{
    if(n<=1){
        return n;
    }
    return retFib(n-1)+retFib(n-2);
}
int main()
{
    int n;
    cin >> n;
    if(n%2==0)
        cout << retPrime(n/2)<<" ";
    else
        cout << retFib((n/2)+1)<<" ";
    return 0;
}
