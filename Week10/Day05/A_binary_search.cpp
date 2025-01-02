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
        int val, l=0, r=n-1, flag=0;
        cin >> val;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(a[mid]==val)
            {
                flag=1;
                break;
            }
            else if(a[mid]>val) r=mid-1;
            else l=mid+1;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}