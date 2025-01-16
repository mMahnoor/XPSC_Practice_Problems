// Problem link: https://codeforces.com/problemset/problem/230/B
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(long long val)
{
    if(val==1) return false;
    for (int i = 2; i*i <= val; i++)
    {
        if(val%i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        long long x = sqrt(val);
        if((x*x)==val && isPrime(x)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}