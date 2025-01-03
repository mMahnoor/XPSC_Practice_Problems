// Problem link: https://codeforces.com/contest/474/problem/B
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n), res;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        vector<int>::iterator it;
        it=upper_bound(x.begin(), x.end(), m);
        cout << (it-x.begin()) << "\n";
    }
    return 0;
}