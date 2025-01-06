// Problem link: https://codeforces.com/problemset/problem/1833/B
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        multimap<int, int> a;
        vector<int> b(n), res(n);
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            a.insert(make_pair(v, i));
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        multimap<int, int>::iterator it=a.begin();
        for (int i = 0; i < n; i++)
        {
            res[it->second]=b[i];
            it++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}