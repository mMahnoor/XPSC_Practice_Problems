// Problem link: https://codeforces.com/problemset/problem/1985/F
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool target(long long mid, vector<long long> a, vector<long long> c, long long h)
{
    long long total=0;
    for (long long i = 0; i < a.size(); i++)
    {
        long long p=ceil(mid/(c[i]*1.0));
        total+=(p*a[i]); 
        if(total>=h) return true;
    }
    return total>=h;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, h;
        cin >> h >> n;
        vector<long long> a(n), c(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        long long i = 1, j = 1e12, mid, res=0;
        while (i <= j) {
            mid = (i+j)/2;
            if (target(mid, a, c, h)) 
            {
                res=mid;
                j = mid-1;
            }
            else 
            {
                i = mid+1;
            }
        }       
        cout << res << "\n";
    }
    return 0;
}