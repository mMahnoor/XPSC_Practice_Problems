// Problem link: https://codeforces.com/problemset/problem/1982/B
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x, y, k, r;
        cin >> x >> y >> k;
        x++;
        k--;
        while(x!=y)
        {
            while(x%y==0)
            {
                x/=y;
            }
            if(k==0) break;
            r = y-(x%y);
            if(k>=r)
            {
                k-=r;
                x+=r;
            }
            else
            {
                x+=k;
                k=0;
            }
        }
        if(x==y)
        {
            x=1;
            k%=(y-1);
            x+=k;
        }
        cout << x << "\n";
    }
    return 0;
}