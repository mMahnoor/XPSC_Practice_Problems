// Problem link: https://codeforces.com/problemset/problem/1538/C
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long cntP=0;
        for (int i = 0; i < n; i++)
        {
            long long up, low;
            low=lower_bound(a.begin(), a.end(), l-a[i])-a.begin();
            up=upper_bound(a.begin(), a.end(), r-a[i])-a.begin();
            if(r-a[i]>=a[i] && l-a[i]<=a[i]) low++;
            cntP+=(up-low);
        }
        cout << cntP/2 << "\n";
    }
    return 0;
}