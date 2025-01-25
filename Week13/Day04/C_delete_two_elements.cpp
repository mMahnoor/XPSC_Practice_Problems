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
        long long n, sum=0, s, cnt=0;
        cin >> n;
        vector<long long> a(n);
        map<long long, long long> mp;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            sum+=a[i];
        }
        if((2*sum)%n==0) 
        {
            s=(2*sum)/n;
        }
        else 
        {
            cout << "0\n";
            continue;
        }
        for (long long i=0; i<n; i++)
        {
            long long v=s-a[i];
            if(mp[v]>0)
            {
                cnt+=mp[v];
                if(a[i]==v) cnt-=1;
            }
        }
        
        cout << cnt/2 << "\n";
    }
    return 0;
}