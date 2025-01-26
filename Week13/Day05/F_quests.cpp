#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long target(long long mid, long long n, vector<long long> a, long long d)
{
    long long sum=0;
    for (int i = 0; i < d; i++)
    {
        if(i<mid && i<n) sum += a[i];
        else{
            int k=i%mid;
            if(k<n) sum += a[k];
        }
    }
    
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, c, d;
        cin >> n >> c >> d;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<long long>());
        long long sum=0;
        for (long long i = 0; i < n; i++)
        {
            if(i>=d) break;
            sum+=a[i];
        }
        if(sum>=c)
        {
            cout << "Infinity\n";
            continue;
        }
        long long i = 0, j = 1e7, mid, res=-1;
        while (i <= j) {
            mid = i+(j-i)/2;
            if (target(mid+1, n, a, d)>=c) {
                res = mid;
                i = mid+1;
            }
            else {
                j = mid-1;
            }
        }
        if(res<0) cout << "Impossible\n";
        else cout << res << '\n';
    }
    return 0;
}