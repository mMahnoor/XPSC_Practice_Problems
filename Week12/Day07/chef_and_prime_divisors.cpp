#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<long long> primes;
const long long maxN = 1e5;
void sieve() {
    vector<bool> isPrime(maxN, true);
    for (long long i = 2; i*i <= maxN; i++)
    {
        if(isPrime[i])
        {
            for (long long j = i+i; j <= maxN; j+=i)
            {
                isPrime[j]=false;
            }
            
        }
    }
    for (int i = 2;i <= maxN;i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

set<long long> factors(long long b)
{
    set<long long> divisors;
    for(long long i=0; i<primes.size(); i++)
    {
        if(primes[i]*primes[i]>b) break;
        while(b%primes[i]==0)
        {
            divisors.insert(primes[i]);
            b /= primes[i];
        }
    }
    if(b>1) divisors.insert(b);
    return divisors;
}

int main() {
    int t;
    cin >> t;
    sieve();
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
        
        int flag=1;

        set<long long> divisors = factors(b);
        for(auto it=divisors.begin(); it!=divisors.end(); it++)
        {
            if(a%(*it)!=0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1) cout << "Yes\n";
        else cout << "No\n";
    }
	return 0;
}