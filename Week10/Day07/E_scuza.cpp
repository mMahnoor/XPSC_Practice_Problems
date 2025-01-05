// Problem link: https://codeforces.com/problemset/problem/1742/E
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
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        multimap<int, int> k;
        for (int i = 0; i < q; i++)
        {
            int val;
            cin >> val;
            k.insert(make_pair(val, i));
        }
        long long sum=0;
        int i=0;
        vector<long long> res(q);
        for (multimap<int, int>::iterator it = k.begin(); it != k.end(); it++)
        {
            while(i<n && it->first>=a[i])
            {
                sum+=a[i];
                i++;
            }
            res[it->second]=sum;
        }
        for (int i = 0; i < q; i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}