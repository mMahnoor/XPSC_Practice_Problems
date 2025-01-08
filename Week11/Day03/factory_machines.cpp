#include <iostream>
using namespace std;
bool target(long long sec, int n, int a[], int t)
{
    long long cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += (sec / a[i]);
        if(t <= cnt){
            return true;
        }
    }
    return false;
}
int main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long i = 1, j = 1e18, mid, res=0;
    while (i <= j) {
        mid = i+(j-i)/2;
        if (target(mid, n, a, t)) {
            res = mid;
            j = mid-1;
        }
        else {
            i = mid+1;
        }
    }

    cout << res << '\n';
    return 0;
}