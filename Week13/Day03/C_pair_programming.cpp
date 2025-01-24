#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cout << "\n";
        long long k, n , m;
        cin >> k >> n >> m;
        vector<long long> a(n), b(m), res;
        long long p=k;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        long long i=0, j=0, flag=0;
        while(i<n || j<m)
        {
            if(j>=m && a[i]>p) 
            {
                flag=1;
                break;
            }
            else if(i>=n && b[j]>p) 
            {
                flag=1;
                break;
            }
            else if(a[i]>p && b[j]>p)
            {
                flag=1;
                break;
            }
            else
            {
                if(i<n && a[i]<=p) 
                {
                    res.push_back(a[i]);
                    if(a[i]==0) p++;
                    i++;
                }
                else if(j<m && b[j]<=p) 
                {
                    res.push_back(b[j]);
                    if(b[j]==0) p++;
                    j++;
                }
            }
        }
        if(!flag)
        {
            for (long long i = 0; i < res.size(); i++)
            {
                cout << res[i] << " ";
            }
        }
        else cout << -1;
        cout << "\n";
    }
    return 0;
}