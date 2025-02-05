// Problem link: https://codeforces.com/problemset/problem/61/E
#include <iostream>
#include <vector>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    pbds<int> pL, pR;
    long long cntL=0, cntR=0, cnt=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pL.insert(a[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        cntR = pR.order_of_key(a[i]);
        pL.erase(a[i]);
        cntL = pL.size()-pL.order_of_key(a[i]);
        cnt += cntR * cntL;
        pR.insert(a[i]);
    }
    cout << cnt << "\n";
    
    return 0;
}