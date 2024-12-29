#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<long long, long long> mp;
    int i=0;
    long long cnt=0;
    long long sum=0;
    while(i<n)
    {
        sum+=a[i];
        if(sum==x)
        {
            cnt++;
        }
        if(mp.find(sum-x)!=mp.end())
        {
            cnt+=mp[sum-x];
        }
        mp[sum]++;
        
        i++;
    }
    cout << cnt << "\n";
    return 0;
}