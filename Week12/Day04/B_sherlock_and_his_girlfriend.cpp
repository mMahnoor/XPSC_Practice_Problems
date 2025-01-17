#include <iostream>
#include <vector>
#include <map>
using namespace std;

const int maxN=100000;

vector<int> primes;
vector<bool> isPrime(maxN+5, true);

void sieve()
{
    for (int i = 2; i*i <= maxN+1; i++)
    {
        if(isPrime[i])
        {
            for (int j = i+i; j <= maxN+1; j+=i)
            {
                isPrime[j]=false;
            }
            
        }
    }
    
}
int main()
{
    int n;
    cin >> n;

    sieve();
    if(n <= 2) cout << "1\n";
    else cout << "2\n";
    for (int i = 2; i < n+2; i++)
    {
        if(isPrime[i]) cout << "1 ";
        else cout << "2 ";
    }
    cout << "\n";
    return 0;
}