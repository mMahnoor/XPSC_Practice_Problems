#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<long long, long long> mp;
    int i=0;
    long long cnt=0;
    long long sum=0;
    mp[sum%n]++;
    while(i<n)
    {
        sum+=a[i]%n;
        int tmp=sum%n;
        if(tmp<0)
        {
            tmp=(n+tmp);
        }
        if(mp.find(tmp)!=mp.end())
        {
            cnt+=mp[tmp];
        }
        mp[tmp]++;        
        i++;
    }
    cout << cnt << "\n";
    return 0;
}