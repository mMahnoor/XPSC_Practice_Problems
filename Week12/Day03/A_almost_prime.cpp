// Problem link:https://codeforces.com/problemset/problem/26/A
#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> primes;
void sieve()
{
    vector<bool> isPrime(3001, true);
    for (int i = 2; i*i < 3000; i++)
    {
        if(isPrime[i])
        {
            for (int j = i+i; j < 3000; j+=i)
            {
                isPrime[j]=false;
            }
            
        }
    }
    for (int i = 2; i < 3000; i++)
    {
        if(isPrime[i]) primes.push_back(i);
    }
    
}
int main()
{
    int n;
    cin >> n;

    sieve();
    int cnt=0;
    for(int i = 1; i <= n; i++)
    {
        map<int, int> mp;
        int k=0, val=i;
        while(val>1)
        {
            while(val%primes[k]==0)
            {
                mp[primes[k]]++;
                val /= primes[k];
            }
            k++;
        }
        if(mp.size()==2) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}