// Problem Link: https://codeforces.com/problemset/problem/1676/F
#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        map<int, int> mp;
        map<int, pair<int, int> > id;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int l=-1, r=0;
        map<int, int>::iterator it, it2=mp.begin();
        while(it2!=mp.end() && it2->second<k)
        {
            it2++;
        }
        if(it2!=mp.end()) 
        {
            l=it2->first;
            int val = it2->first;
            for (it = ++it2; it != mp.end(); it++)
            {
                if(l==-1 && it->second>=k) 
                {
                    l=it->first;
                }
                else if(it->second>=k && (it->first-val==1))
                {
                    r++;
                }
                else 
                {
                    if(l!=-1)
                    {
                        id.insert(make_pair(r, make_pair(l, l+r)));
                    }
                    if(it->second>=k)
                    {
                        l=it->first;
                    }
                    else l=-1;
                    r=0;
                }
                val=it->first;
            }
        }
        id.insert(make_pair(r, make_pair(l, l+r)));
        l=id.rbegin()->second.first;
        r=id.rbegin()->second.second;
        if(l==-1) cout << -1 << "\n";
        else cout << l << " " << r << "\n";

    }
    return 0;
}
