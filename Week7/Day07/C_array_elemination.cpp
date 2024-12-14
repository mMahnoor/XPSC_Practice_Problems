// Problem link: https://codeforces.com/problemset/problem/1602/C
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int maxV=0, maxB=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxV=max(maxV, a[i]);
        }
        if(maxV>0) maxB=log2(maxV);
        vector<int> freq(maxB+2), res;
        for (int i = maxB; i >=0; i--)
        {
            for(int j=0; j<n; j++)
            {
                if((a[j]>>i)&1)
                {
                    freq[i]++;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            int flag=1;
            for (int j = maxB; j >= 0; j--)
            {
                if(freq[j]%i!=0) 
                {
                    flag=0;
                    break;
                }
            }
            if(flag) res.push_back(i);
        }
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}