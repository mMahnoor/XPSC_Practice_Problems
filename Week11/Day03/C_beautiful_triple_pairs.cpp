// Problem link: https://codeforces.com/problemset/problem/1974/C
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long cntP=0;
        map<tuple<long long, long long, long long>, long long> mp;
        for (int i = 0; i < n-2; i++)
        {
            tuple<long long, long long, long long> t1=make_tuple(a[i], a[i+1], a[i+2]), t2=make_tuple(a[i], a[i+1], 0), t3=make_tuple(a[i], 0, a[i+2]), t4=make_tuple(0, a[i+1], a[i+2]);
            cntP+=mp[t2]+mp[t3]+mp[t4];
            cntP-=(3*(mp[t1]));
            mp[t1]++;
            mp[t2]++;
            mp[t3]++;
            mp[t4]++;
        }
        cout << cntP << "\n";
    }
}