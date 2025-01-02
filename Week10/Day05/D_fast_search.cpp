#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), res;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int k;
    cin >> k;
    while (k--)
    {
        int l, r;
        cin >> l >> r;
        vector<int>::iterator it1, it2;
        it1=lower_bound(a.begin(), a.end(), l);
        it2=upper_bound(a.begin(), a.end(), r);
        res.push_back(it2-it1);
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    
    cout << "\n";
    return 0;
}