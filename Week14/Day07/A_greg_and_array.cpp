// Problem link: https://codeforces.com/problemset/problem/295/A
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n), m_pref(1e5+5), k_pref(1e5+5), v;
    vector<pair<long long, long long> > op;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(long long i = 0; i < m; i++)
    {
        long long l, r, d;
        cin >> l >> r >> d;
        op.push_back(make_pair(l, r));
        v.push_back(d);
    }
    for(long long i = 0; i < k; i++)
    {
        long long x, y;
        cin >> x >> y;
        k_pref[x]+=1;
        k_pref[y+1]-=1;
    }
    for (long long i = 1; i < k_pref.size(); i++)
    {
        k_pref[i]+=k_pref[i-1];
    }
    for (long long i = 1; i < m+1; i++)
    {
        v[i-1]*=k_pref[i];
    }
    for (long long i = 0; i < m; i++)
    {
        m_pref[op[i].first] += v[i];
        m_pref[op[i].second+1] -= v[i];
    }
    for (long long i = 1; i < m_pref.size(); i++)
    {
        m_pref[i]+=m_pref[i-1];
    }
    for (long long i = 1; i < n+1; i++)
    {
        cout << a[i-1]+m_pref[i] << " ";
    }    
    cout << "\n";
    return 0;
}