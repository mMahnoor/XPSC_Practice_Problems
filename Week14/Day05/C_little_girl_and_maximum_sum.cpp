#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> a(n), pref(n+2);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<long long>());
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        pref[l]+=1;
        pref[r+1]-=1;
    }
    for (int i = 1; i < n+2; i++)
    {
        pref[i]+=pref[i-1];
    }
    sort(pref.begin(), pref.end(), greater<long long>());
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=(a[i]*pref[i]);
    }    
    cout << sum << "\n";
    return 0;
}