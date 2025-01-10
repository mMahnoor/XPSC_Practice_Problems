// Problem link: https://codeforces.com/problemset/problem/1840/D
#include <iostream>
#include <algorithm>
using namespace std;

bool target(long long mid, int a[], int n)
{
    long long cnt=1, k=0;
    for (int i = 0; i < n; i++)
    {
        if((a[i]-a[k])> 2*mid) 
        {
            cnt++;
            k=i;
        }
    }
    return cnt<=3;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        long long i = 0, j = 1e9, mid, res=0;
        while (i <= j) {
            mid = i+(j-i)/2;
            if (target(mid, a, n)) 
            {
                res = mid;
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