// Problem link: https://codeforces.com/problemset/problem/1918/B
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
        vector<int> a(n), b(n), minB(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i;

        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int k = 0;
        for (map<int, int>::iterator it=mp.begin(); it != mp.end(); it++)
        {
            cout << it->first << " ";
            minB[k]=b[it->second];
            k++;
        }
        cout << '\n';
        for (int i = 0; i < n; i++)
        {
            cout << minB[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}