#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0, j=0;
    long long segments=0;
    map<int, int> mp;
    while(j<n)
    {
        mp[a[j]]++;
        
        while(mp.size()>k)
        {                
            mp[a[i]]--;
            if(mp[a[i]]==0) mp.erase(a[i]);
            i++;
        }
        segments+=(j-i+1);
        j++;
    }
    cout << segments << "\n";
    return 0;
}