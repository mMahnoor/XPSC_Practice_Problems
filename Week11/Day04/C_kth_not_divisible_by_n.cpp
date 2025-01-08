#include <iostream>
using namespace std;
bool target(long long mid, int n, int k)
{
    long long val=mid-(mid/n);
    return val>=k;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        long long i = 1, j = 1e18, mid, res=0;
        while (i <= j) {
            mid = i+(j-i)/2;
            if (target(mid, n, k)) {
                res = mid;
                j = mid-1;
            }
            else {
                i = mid+1;
            }
        }

        cout << res << '\n';
    }
    
    return 0;
}