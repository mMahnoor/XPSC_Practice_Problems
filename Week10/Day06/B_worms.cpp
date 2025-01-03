// Problem link: https://codeforces.com/contest/474/problem/B
// Problem link: https://codeforces.com/contest/474/problem/B
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), pre_sum(n), res;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        pre_sum[i]=sum;
    }
    int m;
    cin >> m;
    while(m--)
    {
        int q;
        cin >> q;
        vector<int>::iterator it;
        it=lower_bound(pre_sum.begin(), pre_sum.end(), q);
        res.push_back((it-pre_sum.begin()+1));
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << "\n";
    }
    return 0;
}