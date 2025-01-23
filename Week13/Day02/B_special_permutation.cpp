// Problem link: https://codeforces.com/problemset/problem/1612/B
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
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> res(n);
        res[0]=a;
        res[n-1]=b;
        int val=n, minV=a, maxV=b;
        for (int i = 1; i < n-1; i++)
        {
            while(val==a || val==b) val--;
            res[i]=val;
            val--;
        }
        for (int i = 0; i < n/2; i++)
        {
            minV=min(minV, res[i]);
        }
        for (int i = (n/2); i < n; i++)
        {
            maxV=max(maxV, res[i]);
        }
        if(minV==a && maxV==b)
        {
            for (int i = 0; i < n; i++)
            {
                cout << res[i] << " ";
            }
            cout << "\n";
        }
        else cout << "-1\n";
    }
    return 0;
}