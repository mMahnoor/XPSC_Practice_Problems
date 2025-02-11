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
        int n, maxK=0;
        long long ans=0;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++)
        {
            if(a[i]<a[i-1])
            {
                mp[a[i-1]-a[i]]++;
                a[i]=a[i-1];
                maxK++;
            }
        }
        map<int, int> :: iterator it;
        long long v = 0;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            ans+=(maxK+1)*(it->first-v);
            maxK-=it->second;
            v=it->first;
        }
        cout << ans << "\n";
    }
    return 0;
}