#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, cnt_even=0;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2==0) cnt_even++;
        }
        int minOp=INT_MAX;
        if(k==4 && n>1)
        {
            minOp = max(0, 2-cnt_even);
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]%k==0)
            {
                minOp=0;
                break;
            }
            else
            {
                if(a[i]<k)
                {
                    minOp=min(minOp, k-a[i]);
                }
                else 
                {
                    minOp = min(minOp, k-(a[i]%k));
                }
            }
        }
        cout << minOp << "\n";
    }
    return 0;
}