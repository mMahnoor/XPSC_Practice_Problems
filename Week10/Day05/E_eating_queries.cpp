#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n, greater<int>());
        int pre_sum[n], sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
            pre_sum[i]=sum;
        }
        while(q--)
        {
            int target, cnt=-1;
            cin >> target;
            int l=0, r=n-1;
            while(l<r)
            {
                int mid=(l+r)/2;
                if(pre_sum[mid]>=target)
                {
                    cnt=mid+1;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            if(r==l && pre_sum[r]>=target) cnt=r+1;
            cout << cnt << "\n";
        }
    }
    return 0;
}