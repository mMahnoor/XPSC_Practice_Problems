#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long d1=a[0], d2=a[1], flag=1, d=0;
        for (int i = 0, j  =1; i < n; i+=2, j+=2)
        {
            d1=__gcd(d1, a[i]);
            if(j<n) d2=__gcd(d2, a[j]);
        }
        for (int i = 0; i < n; i+=2)
        {
            if(a[i]%d2==0)
            {
                flag=0;
                break;
            }
        }
        if(flag) d=d2;
        else
        {
            flag=1;
            for (int i = 1; i < n; i+=2)
            {
                if(a[i]%d1==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag) d=d1;
        }
        cout << d << "\n";
    }
    return 0;
}