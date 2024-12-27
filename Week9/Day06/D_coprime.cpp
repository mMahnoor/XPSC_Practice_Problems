#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], maxV=-1;
        vector<int> maxID(1003, -1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxID[a[i]]=i+1;
        }
        for (int i = 1; i < 1001; i++)
        {
            for (int j = i; j < 1001; j++)
            {
                if(maxID[i]>0 && maxID[j]>0)
                {
                    if(__gcd(i, j)==1)
                    {
                        int v=maxID[i]+maxID[j];
                        maxV=max(maxV, v);
                    }
                }
            }
            
        }
        cout << maxV << "\n";
    }
    return 0;
}