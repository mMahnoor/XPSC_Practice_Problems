// Problem link: https://codeforces.com/contest/1981/problem/B
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        cin >> n >> m;

        long long lower, upper=n+m, res;
        if(n-m < 0) lower=0;
        else lower = n-m;
        if(upper-lower <= 1) cout << upper << "\n";
        else 
        {
            int bitID=0;
            for (int i = log2(upper); i >= 0; i--)
            {
                if((((upper>>i)&1)&&(!((lower>>i)&1))) || (((lower>>i)&1)&&(!((upper>>i)&1))))
                {
                    bitID=i;
                    break;
                }
            }
            res = upper | ((1LL<<(bitID+1))-1);
            cout << res << "\n";
        }
    }
    return 0;
}