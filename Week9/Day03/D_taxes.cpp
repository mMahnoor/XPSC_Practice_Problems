#include <iostream>
using namespace std;

bool isPrime(long long n) {
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    long long n;
    cin >> n;
    if(isPrime(n))
    {
        cout << "1\n";
    }
    else
    {
        if(n%2==0) cout << "2\n";
        else 
        {
            if(isPrime(n-2)) cout << "2\n";
            else cout << "3\n";
        }
    }
    return 0;
}