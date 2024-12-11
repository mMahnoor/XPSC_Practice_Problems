// Problem link: https://codeforces.com/problemset/problem/1420/B
#include <iostream>
#include <cmath>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], max_elem=0;
        map<long long, long long> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            max_elem=max(max_elem, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int k=0;
            for(int j=log2(max_elem); j>=0; j--)
            {
                if((a[i]>>j)&1)
                {
                    mp[k]++;
                    break;
                }
                k++;
            }
        }
        long long cnt=0;
        for (map<long long, long long>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second>1)
            {
                cnt+=(it->second*(it->second-1))/2;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}