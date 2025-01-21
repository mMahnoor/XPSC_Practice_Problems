// Problem link: https://codeforces.com/problemset/problem/1955/D
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        map<int, int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            mp1[b[i]]++;
        }
        int i=0, j=0, res=0, cnt=0;
        map<int, int>::iterator it;
        while(j<n)
        {
            mp2[a[j]]++;
            if(mp1[a[j]]>=mp2[a[j]]) cnt++;
            if(j-i+1==m)
            {
                if(cnt>=k) res++;
                if(mp1[a[i]] && mp2[a[i]]) 
                {
                    mp2[a[i]]--;
                    if(mp1[a[i]]>mp2[a[i]]) cnt-=1;
                }
                i++;
            }
            j++;
        }
        cout << res << "\n";
    }
    return 0;
}