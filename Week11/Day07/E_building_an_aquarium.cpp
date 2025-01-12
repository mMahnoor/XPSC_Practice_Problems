// problem link: https://codeforces.com/problemset/problem/1873/E
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool target(long long mid, vector<int> a, int x)
{
    long long total=0;
    for (int i = 0; i < a.size(); i++)
    {
        if(mid>a[i]) total+=(mid-a[i]);
    }
    return total<=x;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long i = 1, j = 1e10, mid, res=0;
        while (i <= j) {
            mid = (i+j)/2;
            if (target(mid, a, x)) 
            {
                res=mid;
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