// Problem link: https://codeforces.com/problemset/problem/1749/C
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool target(int mid, vector<int> a)
{
    for (int i = 0; i < mid; i++)
    {
        vector<int>::iterator it=upper_bound(a.begin(), a.end(), (mid-i));
        if(it==a.begin())
        {
            return false;
        }
        a.erase(--it);
        if(!a.empty()) 
        {
            a.front()+=mid-i;
            sort(a.begin(), a.end());
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int i = 0, j = n, mid, res=0;
        while (i <= j) {
            mid = (i+j)/2;
            if (target(mid, a)) 
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