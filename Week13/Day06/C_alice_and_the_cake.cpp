// Problem link: https://codeforces.com/problemset/problem/1654/C
#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, minV=1e9;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        priority_queue<long long> pq;
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            sum+=a[i];
        }
        if(n==1) cout << "YES\n";
        else
        {
            pq.push(sum);
            long long flag=1;
            while(!pq.empty())
            {
                long long val = pq.top();
                pq.pop();
                long long v1=val/2, v2=val-(val/2); 
                if(mp[v1]>0) mp[v1]--;
                else
                {
                    pq.push(v1);
                }
                if(mp[v2]>0) mp[v2]--;
                else
                {
                    pq.push(v2);
                }
                if(pq.size()>n) break;
            }
            for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
            {
                if(it->second>0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}