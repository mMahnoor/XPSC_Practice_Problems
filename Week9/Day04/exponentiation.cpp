// Problem link: https://cses.fi/problemset/task/1095
#include <iostream>
using namespace std;

const int mod=1000000007;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long a, b;
        cin >> a >> b;
        long long res=1%mod;
        while(b)
        {
            if(b&1)
            {
                res=((res%mod)*(a%mod))%mod;
            }
            a = a * a % mod;
            b/=2;
        }
        cout << res << "\n";
    }
}