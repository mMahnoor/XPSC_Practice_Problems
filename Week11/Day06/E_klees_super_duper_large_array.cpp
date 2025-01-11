// Problem link: https://codeforces.com/problemset/problem/2009/E
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

long long target(long long a, long long n)
{
    return (n*((2*a)+(n-1)))/2;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        
        long long i = 1, j = n, mid, res=LONG_MAX;
        while (i <= j) {
            mid = (i+j)/2;
            long long sum1=target(k, mid), sum2=target(mid+k, n-mid);
            res=min(res, abs(sum1-sum2));
            if (sum1<=sum2) 
            {
                i = mid+1;
            }
            else 
            {
                j = mid-1;
            }
        }       
        cout << res << "\n";
    }
    return 0;
}