#include <iostream>
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
    while(k--)
    {
        int val, l=0, r=n-1, res=0;
        cin >> val;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(a[mid]<=val)
            {
                res=mid+1;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout << res << "\n";
    }
    
    return 0;
}