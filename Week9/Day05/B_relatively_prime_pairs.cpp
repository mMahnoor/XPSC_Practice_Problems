// Problem link: https://codeforces.com/problemset/problem/1051/B
// Problem link: https://codeforces.com/problemset/problem/1051/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n], diff[n], maxV=0, z=1, y=0, eql=-1, allEql=1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxV=max(maxV, a[i]);
        if(allEql==-1) eql=a[i];
        else
        {
            if(eql!=a[i]) allEql=0;
        }
    }
    if(n==2)
    {
        if(a[0]>a[1])
        {
            z=a[0]-a[1];
            y=1;
        }
        else if(a[0]<a[1]) {
            z=a[1]-a[0];
            y=1;
        }
        else
        {
            z=a[0]+1;
            y=n;
        }
    }
    else
    {
        if(!allEql)
        {
            for (int i = 0; i < n; i++)
            {
                diff[i]=(maxV-a[i]);
            }
            z=diff[0];
            for (int i = 1; i < n; i++)
            {
                z=__gcd(z, diff[i]);
            }
            for (int i = 0; i < n; i++)
            {
                y+=(diff[i]/z);
            }
        }
        else
        {
            z=a[0]+1;
            y=n;
        }
    }
    cout << y << " " << z << "\n";
    return 0;
}