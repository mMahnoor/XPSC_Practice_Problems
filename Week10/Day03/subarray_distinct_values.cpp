#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0, j=0;
    long long cnt=0;
    while(j<n)
    {
        mp[a[j]]++;
        while(mp.size()>k)
        {
            mp[a[i]]--;
            if(mp[a[i]]==0) mp.erase(a[i]);
            i++;
        }
        cnt+=(j-i+1);
        j++;
    } 
    cout << cnt << "\n";   
    return 0;
}