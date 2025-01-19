#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n==1) 
        {
            cout << "1\n";
            continue;
        }
        sort(a.begin(), a.end());
        long long x=0, minC=0, insertV;
        for (int i = 0; i < n; i++)
        {
            x=__gcd(x, a[n-1]-a[i]);
        }
        insertV=a[n-1]-x;
        for (int i = 0; i < n; i++)
        {
            minC += (a[n-1]-a[i])/x;
        }
        for (int i = n-2; i >= 0; i--)
        {
            if(insertV!=a[i])
            {
                break;
            }
            insertV-=x;
        }
        minC+=(a[n-1]-insertV)/x;
        cout << minC << "\n";
    }
    
    return 0;
}