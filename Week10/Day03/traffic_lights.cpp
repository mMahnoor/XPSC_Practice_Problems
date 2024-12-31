#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    set<int> a;
    a.insert(0);
    a.insert(x);
    map<int, int> mp;
    vector<int> res;
    mp[x]++;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        a.insert(val);
        int p=*--a.find(val);
        int q=*++a.find(val);
        int r1=val-p, r2=q-val;

        if(val>p && val<q)
        {
            if(mp[q-p]>0) mp[q-p]--;
            if(mp[q-p]==0) mp.erase((q-p));
        }
        mp[val-p]++;
        mp[q-val]++;
        res.push_back(mp.rbegin()->first);
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << "\n";
    
    return 0;
}